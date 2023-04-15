#include "main.h"

/**
 * _strlen_recursion - function to get the length of a string
 *
 * @s:variable to store the string
 *
 * Return: length of the string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
	putchar('\n');

}

