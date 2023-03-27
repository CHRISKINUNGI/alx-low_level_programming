#include<stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: points to the string
 *
 * Return: void
 *
 */

void rev_string(char *s)
{
	int length, i;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
