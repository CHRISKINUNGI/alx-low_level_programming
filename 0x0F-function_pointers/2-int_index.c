#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: Array to search
 * @size: Size of array
 * @cmp: Function pointer
 *
 * Return: Index of first element for which cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
