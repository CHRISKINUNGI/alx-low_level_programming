#include "main.h"

/**
 * get_endianness - checks the endianness whether big or little
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int size = 1;
	char *string = (char *)&size;

	return ((int)*string);
}
