#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to printed between strings
 * @n: number of strings passed to function
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *current;

	va_list(args);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		current = va_arg(args, char *);
		if (current == NULL)
			printf("(nil)");
		printf("%s", current);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
