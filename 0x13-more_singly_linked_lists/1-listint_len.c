#include "lists.h"


/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
