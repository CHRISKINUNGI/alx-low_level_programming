#include "main.h"

/**
 * print_binary - print an int in binary
 *
 * @n: variable of the int being printed
 *
 * Return: void
 *
 */
void print_binary(unsigned long int n)
{
	/**
	 *count_ones used to skip leading zeros when printing the
	 *binary representation.
	 *
	 */
	int counter, count_ones = 0;
	unsigned long int binaryValue;

	/* counter is 64; number of bits for unsigned long int*/
	for (counter = 63; counter >= 0; counter--)
	{
		binaryValue = n >> counter;

		if (binaryValue & 1)
		{
			_putchar('1');
			count_ones++;
		}
		else if (count_ones)
			_putchar('0');
	}

	/*prints 0 if no 1's encountered*/
	if (!count_ones)
		_putchar('0');
}
