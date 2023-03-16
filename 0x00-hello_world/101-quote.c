#include<stdio.h>

/**
 * main - program entry point
 *
 * Description - prints text without puts or prinf
 *
 * Return: 1 (success)
*/

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while (text[i] != '\0')
	{
		putchar (text[i]);
		i++;
	}
	return (1);
}
