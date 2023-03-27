#include<stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: array
 *
 * Return: void
 *
 */

void print_rev(char *s)
{
	int length, i;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar (s[i]);
	}
	putchar ('\n');
}
