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
	int multiplicationResult, firstArg, secondArg;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		firstArg = atoi(argv[1]);
		secondArg = atoi(argv[2]);

		multiplicationResult = firstArg * secondArg;

		printf("%d\n", multiplicationResult);

		return (0);
	}
}
