#include "function_pointers.h"

/**
 * int_index - function that searches for an number
 * @array: array containing the elements
 * @size: size of the array
 * @cmp: pointer function to int_index
 *
 * Return: -1, no element match size <= 0 return index of the first element
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
			return (counter);
	}
	return (-1);
}
