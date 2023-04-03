#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: contains the variable,string
 * @c: contains the character to be located
 *
 * Return:pointer to the first occurence of char c or null when c not found
 *
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (s + count);
		}
	}

	return (0);
}
