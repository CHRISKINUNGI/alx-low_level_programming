#include"main.h"

/**
 * main - program execussion begins here
 *
 * Description - program that multiplies two numbers
 *
 * @argc: int variable for number of arguments passed to a program
 *
 * @argv: array of arguments passed to aprogram
 *
 * Return: 1 program hasn't received 2 args,0 succesfull termination of program
 *
 */

int main(int argc, char *argv[])
{
	int multiplicationResult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		multiplicationResult = atoi(argv[1]) *  atoi(argv[2]);

		printf("%d\n", multiplicationResult);

	}
	return (0);
}
