#include <stdio.h>

/**
 *  _isalpha - checks whether a character is an alphabet
 *
 *  @c: store the character to check whether it is an alphabet
 *
 *  Return:     1 if c is a letter
 *
 */

char _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

