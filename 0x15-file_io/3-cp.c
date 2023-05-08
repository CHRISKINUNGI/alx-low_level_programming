#include "main.h"

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 97 on wrong number of arguments, 98 on read error
*/

int main(int argc, char *argv[])
{
	int file_to, file_from, read_bytes, write_bytes;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]), exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
	if (argc == 4)
	{
		if (argv[3][0] == '1')
			dprintf(STDERR_FILENO, "Error: Can't close fd %s", argv[2]), exit(100);
	}
	while ((read_bytes = read(file_from, buf, BUF_SIZE)) > 0)
	{
		write_bytes = write(file_to, buf, read_bytes);
		if (write_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
	}
	if (read_bytes == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]), exit(98);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to), exit(100);
	return (0);
}
