#include<stdio.h>

/**
 *  main - entry point to the program
 *
 *  Return: termination 0 program has no error
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
		if (c == 'z')
			putchar('\n');
	}

	return (0);
}
