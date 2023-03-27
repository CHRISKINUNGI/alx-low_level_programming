#include<stdio.h>

/**
 * puts_half - prints half of the string
 *
 * @str: points to the string
 *
 * Return: void
 *
 */

void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			putchar (str[i]);
		}
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
		{
			putchar (str[i]);
		}
	}
	putchar ('\n');
}
