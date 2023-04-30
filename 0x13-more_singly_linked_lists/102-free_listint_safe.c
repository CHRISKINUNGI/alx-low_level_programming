#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 *
 * @h: Pointer to the head of the list to free
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count;
	listint_t *tempNode;

	count = 0;

	while (*h != NULL && (*h)->next != NULL && (*h)->next < *h)
	{
		tempNode = (*h)->next;
		(*h)->next = (*h)->next->next;
		free(tempNode);
		count++;
	}

	tempNode = *h;
	while (tempNode != NULL)
	{
		(*h) = (*h)->next;
		free(tempNode);
		tempNode = (*h);
		count++;
	}

	*h = NULL;

	return (count);
}
