#include "main.h"

/**
  * _strlen - returns the length of a string
  *
  * @s: character that stores the string
  *
  * Return: integer the number of characters in a string
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
