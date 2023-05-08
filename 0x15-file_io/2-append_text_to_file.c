#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int functionUD, length, write_bytes;

	if (filename == NULL)
		return (-1);

	functionUD = open(filename, O_WRONLY | O_APPEND);
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
