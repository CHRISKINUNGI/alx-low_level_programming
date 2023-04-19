#include "function_pointers.h"

/**
 * action - function to print elements of an array
 *
 * @functionaddress: contains the elements
 *
 * Return: nothing
 *
 */

void action(int atoi(array_iterator))
{
	action = array_iterator;
}

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
	action(array);
}
