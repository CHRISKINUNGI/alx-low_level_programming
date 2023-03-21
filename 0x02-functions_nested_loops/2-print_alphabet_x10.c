#include<stdio.h>

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			putchar (ch);
		}
		putchar ('\n');
	}
}
