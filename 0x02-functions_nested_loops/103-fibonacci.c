
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, for even terms
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int num1, num2, sum;
	float t_sum;

	num1 = 0;
	num2 = 1;

	while (1)
	{
		sum = num1 + num2;

		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
		{
			t_sum += sum;
		}
		num1 = num2;
		num2 = sum;

	}
	printf("%.0f\n", t_sum);

	return (0);
}
