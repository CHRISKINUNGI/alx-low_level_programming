#include"main.h"

/**
 * main - entry point of a program
 *
 * Description - program that prints the minimum number of coins given amount
 *
 * @argc: int variable for number of arguments
 *
 * @argv: array string for arguments
 *
 * Return: 1 Error, 0 successfull termination
 *
 */

int main(int argc, char *argv[])
{
	int amountinCents, numberofCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	numberofCoins = 0;
	amountinCents = atoi(argv[1]);


	if (amountinCents < 0)
	{
		printf("0\n");
	}

	else
	{
		numberofCoins += amountinCents / 25;
		amountinCents %= 25;

		numberofCoins += amountinCents / 10;
		amountinCents %= 10;

		numberofCoins += amountinCents / 5;
		amountinCents %= 5;

		numberofCoins += amountinCents / 2;
		amountinCents %= 2;

		numberofCoins += amountinCents / 1;

		printf("%d\n", numberofCoins);
	}
	return (0);
}
