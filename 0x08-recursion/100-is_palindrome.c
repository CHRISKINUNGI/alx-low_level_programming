#include "main.h"

/**
 * is_palindrome_rec - function that checks if a string is
 * a palindrome
 *
 * @s: String to be tested
 * @first: first number in string
 * @last: second number in string
 *
 * Return: 1 if it is a palindrome, 0 if not
 *
 */

int is_palindrome_rec(char *s, int first, int last)
{

	if (first == last)
		return (1);
	if (s[first] != s[last])
		return (0);

	if (first < last + 1)
		return (is_palindrome_rec(s, first + 1, last - 1));

	return (1);
}



/**
 * is_palindrome - function that checks if a string is
 * a palindrome
 *
 * @s: String to be tested
 *
 * Return: 1 if it is a palindrome, 0 if not
 *
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);
	if (s[0] != s[length - 1])
		return (0);
	return (is_palindrome_rec(s, 0, length - 1));
}
