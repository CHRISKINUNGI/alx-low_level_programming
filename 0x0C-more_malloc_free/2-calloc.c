#include "main.h"

/**
 * _calloc -  function allocates memory for an array of nmemb elements
 *  of size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: number of elements
 * @size: size to allocate
 *
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);

}
