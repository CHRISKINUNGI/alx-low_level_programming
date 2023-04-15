#include "main.h"

/**
 * _pow_recursion - function to calculate the power of a number
 *
 * @x: int variable to hold the num being powered
 *
 * @y: int variable that holds to what power
 *
 * Return: -1 if y < 0, return x^y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x *=  _pow_recursion(x, y - 1));
	}

}
