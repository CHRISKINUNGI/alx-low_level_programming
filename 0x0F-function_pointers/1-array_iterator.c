#include "function_pointers.h"

/**
 * array_iterator - function to execute a function
 *
 * @array: array of functions
 * @size: size of the array
 * @action: function pointer
 *
 * Return: nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
