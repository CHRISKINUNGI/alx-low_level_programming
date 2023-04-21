#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the previously allocated memory
 * @old_size: the size of the allocated memory for ptr
 * @new_size: the new size of the new memory block
 *
 * Return: void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
			free(p);
		}
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = ((char *)ptr)[i];
	}
	free(ptr);

	return (p);

}
