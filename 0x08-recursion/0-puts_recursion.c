#include "main.h"

/**
 * _puts_recursion - function to print a string followed by a new line
 *
 * @s: varriable to store string
 *
 * Return: void no return type
 *
 */

void _puts_recursion(char *s)
{
	int count;

	count = 0;

	if (s[count] != '\0')
	{
		putchar(s[count]);
		_puts_recursion(&s[count + 1]);
	}
	putchar('\n');
}
