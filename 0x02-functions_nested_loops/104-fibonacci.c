#include <stdio.h>

/**
 * length_of_number - returns the length of a number
 *
 * @n: number to be checked
 *
 * Return: length of number
 */


int length_of_number(int n)
{
	int length = 0;

	while (n != 0)
	{
		n /= 10;
		++length;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 *
 * Return: 0 if success
 *
 */

int main(void)
{
	int n, original;
	unsigned long num1 = 1, num2 = 2, sum, mx = 100000000,
	num1z = 0, num2z = 0, sumz = 0;

	for (n = 1; n <= 98; ++n)
	{
		if (num1z > 0)
			printf("%lu", num1z);
		original = length_of_number(mx) - 1 - length_of_number(num1);

		while (num1z > 0 && original > 0)
		{
			printf("%d", 0);
			--original;
		}

		printf("%lu", num1);

		sum = (num1 + num2) % mx;
		sumz = num1z + num2z + (num1 + num2) / mx;
		num1 = num2;
		num1z = num2z;
		num2 = sum;
		num2z = sumz;

		if (n != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}

