#include<stdio.h>
/**
 * main - Entry point of the program
 *
 * Destination - program to print alphabet in reverse order
 *
 * Return: 0 termination succesfull
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar (reverse);
	}
	putchar ('\n');
	return (0);
}
