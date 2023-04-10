#include"main.h"

/**
 * main - program excecussion begins here
 *
 * Description - program to print program name
 *
 * @argc: int variable to representing number of arguments in a program
 *
 * @argv: array of string that contain the actual argument
 *
 * Return: 0 succesful termination
 *
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
