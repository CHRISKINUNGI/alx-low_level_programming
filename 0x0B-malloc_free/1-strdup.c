#include "main.h"
#include <string.h>

/**
 * _strdup - returns pointer to newly allocated memory of a string copy
 *
 * @str: the string to copy
 *
 * Return: array else NULL
*/

char *_strdup(char *str)
{
	char *rep;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	rep = malloc((size + 1) * sizeof(char));

	if (rep == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		rep[i] = str[i];

	rep[i] = '\0';

	return (rep);

}
