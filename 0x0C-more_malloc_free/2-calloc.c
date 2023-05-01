#include "main.h"

/**
 * _calloc -  function that allocates memory for an array, using malloc.
 *
 * @nmemb: elements of size bytes
 * @size: size of elements
 *
 * Return: a pointer to the allocated memory,
 * NULL if nmemb or size is 0 or malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (counter = 0; counter < nmemb * size; counter++)
		p[counter] = 0;
	return (p);
}
