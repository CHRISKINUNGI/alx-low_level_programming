#include "function_pointers.h"

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
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
