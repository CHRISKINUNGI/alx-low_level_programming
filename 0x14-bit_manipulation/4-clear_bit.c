#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index of bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* 63 size of unsigned long int */

	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
