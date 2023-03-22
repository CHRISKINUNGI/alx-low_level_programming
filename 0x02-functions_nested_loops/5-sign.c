#include<stdio.h>

/**
 * print_sign - prints sign of a number
 *
 * @n: store the variable supplied
 *
 * Return: 1 n is a positive number
 *         0 n is zero
 *         -1 n is -ve number
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43 + 0);
		return (+1);
	}
	else if (n == 0)
	{
		putchar(0 + 48);
		return (0);
	}
	else
	{
		putchar(45 + 0);
		return (-1);
	}
}
