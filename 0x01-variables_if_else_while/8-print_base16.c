#include<stdio.h>

/**
 * main - Entry point
 *
 * Destination - program to print the number of base 16
 *
 * Return: 0 succesfull termination
 *
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar (number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar (number);
	}
	putchar ('\n');

	return (0);
}
