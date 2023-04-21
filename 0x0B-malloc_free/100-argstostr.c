#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string, NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int i, k, j, l;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	s = malloc(sizeof(char) * (k + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0, l = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, l++)
			s[l] = av[i][j];
		s[l] = '\n';
		l++;
	}

	s[l] = '\0';

	return (s);

}
