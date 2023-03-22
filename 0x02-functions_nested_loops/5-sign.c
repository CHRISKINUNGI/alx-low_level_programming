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
		return (1);
		putchar ('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar ('0');
	}
	else
	{
		return (-1);
		putchar ('-');
	}
}
