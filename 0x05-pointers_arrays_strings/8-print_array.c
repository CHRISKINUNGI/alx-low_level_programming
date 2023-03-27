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
		if (a[length] != '\0')
		{
			printf("%d, ", a[length]);
		}
	}
	printf("%d\n", a[n - 1]);
}
