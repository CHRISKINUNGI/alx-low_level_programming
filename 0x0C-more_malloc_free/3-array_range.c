#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: the min value of the array
 * @max: the max value of the array
 *
 * Return:  pointer to newly created array or NULL
*/

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min + i;

	return (p);

}
