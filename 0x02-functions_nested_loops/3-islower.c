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

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
