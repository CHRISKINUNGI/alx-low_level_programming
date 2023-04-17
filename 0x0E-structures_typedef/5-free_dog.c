#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Pointer to struct dog
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

