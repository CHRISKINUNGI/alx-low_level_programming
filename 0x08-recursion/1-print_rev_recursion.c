#include "main.h"

/**
* _print_rev_recursion - function to print string in reverse
*
* @s: variable to hold the string being reversed
*
* Return: void no return type
*
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}

	/*if (*s == '\0')*/
	else
	{
		putchar('\n');
		return;
	}
}
