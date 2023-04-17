#include "dog.h"

/**
 * print_dog - function to print members of struct dog
 *
 * @d: variable of type dog
 *
 * Return: void
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nothing\n");
	}

	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	else if (d->age == 0.0)
	{
		printf("Age: (nil)\n");
	}

	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	else
	{
		printf("Name: %s \n", d->name);
		printf("Age: %f \n", d->age);
		printf("Owner: %s \n", d->owner);
	}
}

