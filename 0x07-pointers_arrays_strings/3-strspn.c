#include "main.h"
/**
 * _strspn - function to get the length of a prefix substring
 *
 * @s:contains the characters inthe initial string
 *
 * @accept:contains the prefix substring
 *
 * Return:number of bytes in the initial string which consist of accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;

	for (count = 0; accept[count] != '\0'; count++)
	{
		if (accept[count] == s[count])
			break;
	}
	count++;
	return (count);
}
