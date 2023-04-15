#include "main.h"

/**
 * factorial - function that gives the factor
 *
 * @n: variable to store the number whose factorial is being calculated
 *
 * Return: if n < 1 -1 error, factorial of n
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
