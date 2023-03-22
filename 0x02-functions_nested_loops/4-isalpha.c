#include<stdio.h>

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: checks the variable type
 *
 * Return: 1 c is alphabet
 *         0 c is not alphabet:
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
