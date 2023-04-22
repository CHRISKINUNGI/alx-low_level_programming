#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format:
 * @
*/

void print_all(const char * const format, ...)
{
	int i;
	char *s;

	va_list(args);

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
