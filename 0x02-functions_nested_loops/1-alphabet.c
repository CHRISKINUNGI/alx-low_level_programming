#include<stdio.h>

/**
 * print_alphabet - function to print the alphabet in lowercase
 *
 * Return: 0 successfull exit
 *
 */

void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	putchar ('\n');

}
