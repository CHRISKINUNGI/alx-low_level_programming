#include"main.h"

/**
 * isnumber - to find out if number is a digit
 *
 * @number: the input to be tested
 *
 * Return: 1 if not number, 0 if number
*/

int isnumber(char number[])
{
	int i, len;

	len = strlen(number);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(number[i]))
		{
			return (1);
		}
	}

	return (0);

}

/**
 * main - execution of program starts here
 *
 * Description - program to add two numbers
 *
 * @argc: int variable for number of arguments passed to a program
 *
 * @argv: array of string arguments passed to a program
 *
 * Return: 1 when an error occurs, 0 successfull termination
 *
 */

int main(int argc, char *argv[])
{
	int additionResult, argsSize;

	additionResult = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	else if (argc > 0)
	{
		for (argsSize = 1; argsSize < argc; argsSize++)
		{
			if (isnumber(argv[argsSize]) == 0)
			{
				additionResult += atoi(argv[argsSize]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", additionResult);
	}


	return (0);
}
