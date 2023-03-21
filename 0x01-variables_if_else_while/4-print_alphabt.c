#include<stdio.h>

/**
 * main - Entry point to the program
 *
 * Destination - program to display aphabets apart from q and e
 *
 * Return: 0 succesfull run
 *
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}
