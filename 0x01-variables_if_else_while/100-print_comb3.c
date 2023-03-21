#include<stdio.h>

/**
 * main - Entry point of program
 *
 * Destination - program to prints different combination of 2 digits
 *
 * Return: 0 successful termination
 *
 */

int main(void)
{
	int i, k;

	while (i <= '9')
	{
		while (k <= '9')
		{
			if (!(i > k || i == k))
			{
				putchar(i);
				putchar(k);
				if (i == '8' && k == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		k = '0';
		i++;
	}

	return (0);
}


