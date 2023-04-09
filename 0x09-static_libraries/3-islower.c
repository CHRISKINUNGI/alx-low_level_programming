#include <stdio.h>

/**
  * _islower - checks if a character is lowercase
  *
  * @c: checks the input of the function and is of type character
  *
  * Return: 1 if c is lowercase
  *         0 otherwise
  */

char _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

