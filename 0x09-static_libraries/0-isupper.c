#include "main.h"

/**
 * _isupper - tests whether a character is uppercase
 *
 * @c: placeholder for the character to be tested
 *
 * Return: 1 if c is uppercase
 * 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

