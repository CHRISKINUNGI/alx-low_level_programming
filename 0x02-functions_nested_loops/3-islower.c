#include<stdio.h>

/**
 * _islower - check for lowercase character
 *
 * @c:checks the input of the function type int
 *
 * Return: (1) c is lowercase
 *         (0) c is not lowercase
 *
 */

char _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
