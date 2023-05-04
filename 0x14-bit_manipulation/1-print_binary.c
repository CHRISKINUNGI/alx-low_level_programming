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
	int firstCounter, secondCounter;
	unsigned long int binaryFormat;

	secondCounter = 0;
	firstCounter = 0;
	binaryFormat = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (n > 0)
	{
		binaryFormat = n & 1;

		if (binaryFormat == 1)
			secondCounter = 1;
		if (secondCounter == 1)
			putchar(binaryFormat + '0');

		n = n >> 1;
		firstCounter++;	}
}
