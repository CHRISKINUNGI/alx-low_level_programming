#include<stdio.h>

/**
 * _memset - function to fill the firdt n bytes
 *
 * @s:holds character variables
 * @n:holds number of bytes
 * @b:character, variable to be written
 *
 * Return: return a pointer to memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
