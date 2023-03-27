#include<stdio.h>

/**
 * print_array - prints array
 *
 * @a: array
 * @n: number of elements
 *
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int length;

	for (length = 0; length < n - 1; length++)
	{
		printf("%d", a[length]);
		if (length < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
