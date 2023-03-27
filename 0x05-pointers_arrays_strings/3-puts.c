#include<stdio.h>

/**
 * _puts - function that writes a string
 *
 * @str: array
 *
 * Return: void
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		putchar (str[i]);
	}
	putchar ('\n');
}
