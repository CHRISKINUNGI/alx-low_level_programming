#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 succesfull run
 *
 */

int main(void)
{
	char lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar (lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase)
	{
		putchar (uppercase);

		if (uppercase == 'Z')
			putchar ("\n");
	}
	return (0);
}
