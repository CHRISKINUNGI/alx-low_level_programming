#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description - program that prints _putchar
 *
 * Return: 0 succesfull termination
 *
 */

int main(void)
{
	int i;
	char string[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar (string[i]);
	}

	putchar ('\n');

	return (0);
}
