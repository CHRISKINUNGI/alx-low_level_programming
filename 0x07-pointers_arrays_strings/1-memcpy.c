#include "main.h"

/**
 * _memcpy - function to copy memory area
 *
 * @dest: destination variable
 * @src: source of char being copied
 * @n: number or size of characters to be copied
 *
 * Return: pointer to destination (dest)
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
