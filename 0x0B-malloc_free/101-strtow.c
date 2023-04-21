#include <stdlib.h>

/**
 * count - get word count from string without spaces
 *
 * @str: string to count words present
 *
 * Return: The number of words
*/

int count(char *str)
{
	int w = 0;

	while (*str != '\0')
	{
		/*skip spaces*/
		if (*str == ' ')
			str++;
		else
		{
			/*count words*/
			while (*str != ' ' && *str != '\0')
				str++;
			w++;
		}
	}
	return (w);
}

/**
 * free_arr - free arr[i]
 *
 * @ar: array to free
 * @i: array[i]
 *
 * Return: nothing
*/

void free_arr(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
}

/**
 * strtow - split a string to words
 *
 * @str: string to split.
 *
 * Return: NULL if it fails
*/

char **strtow(char *str)
{
	int i, s, j, str_l, w;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_l = count(str);
	/*return null if str_l == 0 || new == NULL*/
	string = malloc((str_l + 1) * sizeof(char *));
	if (str_l == 0 || string == NULL)
		return (NULL);

	for (i = s = 0; i < str_l; i++)
	{
		for (w = s; str[w] != '\0'; w++)
		{
			if (str[w] == ' ')
				s++;

			if (str[w] != ' ' && (str[w + 1] == ' ' || str[w + 1] == '\0'))
			{
				string[i] = malloc((w - s + 2) * sizeof(char));
				if (string[i] == NULL)
				{
					free_arr(string, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; s <= w; s++, j++)
			string[i][j] = str[s];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);
}
