#include "main.h"

/**
  * _strcat - Concatenates two strings
  *
  * @dest: variable to receive string input
  * @src: variable that stores source string
  *
  * Return: *dest
  */

char *_strcat(char *dest, char *src)
{
	int i, count;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (count = 0; src[count] != '\0'; count++)
	{
		dest[i] = src[count];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
