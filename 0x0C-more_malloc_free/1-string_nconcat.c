#include "main.h"

/**
 * string_nconcat - concates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: size to allocate
 *
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		s = malloc(sizeof(char) * (i + j + 1));
	else
		s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);
	if (n >= j)
	{
		for (k = 0; k < i; k++)
			s[k] = s1[k];
		for (l = 0; l < j; l++)
			s[k + l] = s2[l];
	}
	else
	{
		for (k = 0; k < i; k++)
			s[k] = s1[k];
		for (l = 0; l < n; l++)
			s[k + l] = s2[l];
	}
	s[k + l] = '\0';
	return (s);
}
