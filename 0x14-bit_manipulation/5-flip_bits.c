#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip;
 * from one number to another
 *
 * @n: store the number
 * @m: stores the second number
 *
 * Return: number of bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter, number_of_flipbits = 0;

	for (counter = 0; counter < 64; counter++)
	{
		if (((n >> counter) & 1) != ((m >> counter) & 1))
			number_of_flipbits++;
	}
	return (number_of_flipbits);
}
