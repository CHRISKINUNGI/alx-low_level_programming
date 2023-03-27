#include<stdio.h>

/**
 * _strlen - gets the lenth of a string
 *
 * @s: array
 *
 * Return: legth of the string
 *
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}

	return (length);

}
