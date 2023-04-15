#include "main.h"


/**
 * is_prime_number_tester - checks if a number is prime
 * @n: number to check
 * @i: number to test modulate
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number_tester(int n, int i, int x)
{
	if (x != 0)
	{
		return 1;
	}

	if (n % i == 0)
	{
		x = 1;
	}
	return (is_prime_number_tester(n, i + 1, x));

}

/**
 * is_prime_number - function to check if a number is prime
 *
 * @n: variable to hold the num being tested
 *
 * Return: 1 if the num is prime, 0 otherwise
 *
 */

int is_prime_number(int n)
{

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_number_tester(n, 3, 0));
}
