#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print, 0 if filename is NULL
 * or if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int functionUd;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	functionUd = open(filename, O_RDONLY);
	if (functionUd == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(functionUd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(functionUd);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		close(functionUd);
		return (0);
	}

	free(buffer);
	close(functionUd);
	return (write_bytes);
}
