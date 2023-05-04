#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number, or 0 i;
 * there is one or more chars in the string b that is not
 * 0 or 1
 * b is NULL
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int unsignedinterger;

	unsignedinterger = 0;

	if (b == NULL)
		return (0);
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		unsignedinterger = unsignedinterger << 1;

		if (b[counter] == '1')
			unsignedinterger = unsignedinterger ^ 1;
	}

	return (unsignedinterger);
}

