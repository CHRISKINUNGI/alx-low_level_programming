#include "main.h"

/**
 * get_bit - function that returns the index of a value
 *
 * @n: variable to hold value
 * @index: variable to store the position of the bit being searched for
 *
 * Return: value at mentioned index, -1 if error occurred
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/* 63;number of bits for long unsigned int */

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}

