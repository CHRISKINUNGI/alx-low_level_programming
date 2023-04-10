#include"main.h"

/**
 * main - execution of a program begins here
 *
 * Description - program to print all arguments it receives
 *
 * @argc: int variable for number of arguments passed to the program
 *
 * @argv: array of strings for arguments passed
 *
 * Return: 0 successful termination
 *
 */

int main(int argc, char *argv[])
{
	int numberofArgs;

	for (numberofArgs = 0; numberofArgs < argc; numberofArgs++)
	{
		printf("%s\n", argv[numberofArgs]);
	}
	return (0);
}
