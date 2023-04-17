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
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age != NULL ? *d->age : 0.0);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
