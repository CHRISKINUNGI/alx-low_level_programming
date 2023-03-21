#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Destination - program that prints numbers of base 10 starting from 0
 *
 * Return: 0 succesfull termination
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	putchar ('\n');
	return (0);
}
