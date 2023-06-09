#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int functionUD, length, write_bytes;

	if (filename == NULL)
		return (-1);

	functionUD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (functionUD == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(functionUD);
		return (1);
	}

	for (length = 0; text_content[length]; length++)
		;

	write_bytes = write(functionUD, text_content, length);
	if (write_bytes == -1)
	{
		close(functionUD);
		return (-1);
	}

	close(functionUD);
	return (1);
}
