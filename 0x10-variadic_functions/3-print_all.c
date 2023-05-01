#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list myStruct;
	int counter;
	char *s;

	counter = 0;

	va_start(myStruct, format);
	while (format && format[counter])
	{
		switch (format[counter])
		{
		case 'c':
			printf("%c", va_arg(myStruct, int));
			break;
		case 'i':
			printf("%d", va_arg(myStruct, int));
			break;
		case 'f':
			printf("%f", va_arg(myStruct, double));
			break;
		case 's':
			s = va_arg(myStruct, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			counter++;
			continue;
		}
		if (format[counter + 1])
			printf(", ");
		counter++;
	}
	printf("\n");
	va_end(myStruct);
}
