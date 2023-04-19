#include "function_pointers.h"

/**
 * f - function to print a name
 *@name: name to be printed
 * Return: nothing
 *
 */

void f(char *name)
{
	int count;

	for (count = 0; *name != '\0'; count++)
	{
		putchar(name[count]);
	}
}

/**
 * print_name - function to print a name
 * @name: variable to hod the name to be printed
 * @f:function pointer
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
