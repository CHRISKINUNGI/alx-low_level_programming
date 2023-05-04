#include "main.h"

/**
 * set_bit - function to change the value at the given index to 1
 *
 * @n: stores the bits of the integer
 * @index: stores the position of the bit being changed
 *
 * Return: 1 if it works and -1 if there is an error
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
