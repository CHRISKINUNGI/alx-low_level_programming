#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_number - checks if a number is a number
 *
 * @string: string to test
 *
 * Return: 0 if not a number, 1 if a number
 */

int is_number(char *string)
{
	unsigned int i;

	for (i = 0; i < strlen(string); i++)
	{
		if (!isdigit(string[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Program entry point
 *
 * @argc: size of array
 * @argv: character array
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	int firstNumber, secondNumber;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	firstNumber = atoi(argv[1]);
	secondNumber = atoi(argv[2]);

	printf("%d\n", firstNumber * secondNumber);
	return (0);
}
