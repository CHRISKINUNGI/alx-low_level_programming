#include"main.h"

/**
 * main - execution of a program begins here
 *
 * Description - program the number of arguments passed
 *
 * @argc: number of arguments passed
 *
 * @argv: array of string arguments
 *
 * Return: o succesful termination of program
 *
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
