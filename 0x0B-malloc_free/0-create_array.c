#include "main.h"

/**
 * create_array - creates an array of chars, and inits with a specific char
 *
 * @size: memory size to allocate
 * @c: character to init with
 *
 * Return: pointer to array, NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
