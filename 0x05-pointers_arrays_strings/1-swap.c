#include<stdio.h>

/**
 * swap_int - swaps the values of 2 ints
 *
 * @a: holds the first value
 * @b: holds the second value
 *
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
