#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list myStruct;
	unsigned int myCount;
	char *str;

	va_start(myStruct, n);

	for (myCount = 0; myCount < n; myCount++)
	{
		str = va_arg(myStruct, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (myCount < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(myStruct);
}
