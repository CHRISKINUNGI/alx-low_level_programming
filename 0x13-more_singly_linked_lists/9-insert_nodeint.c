#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmpNode;
	unsigned int myCounter;

	if (head == NULL)
		return (NULL);
	tmpNode = *head;
	for (myCounter = 0; myCounter < idx - 1; myCounter++)
	{
		if (tmpNode == NULL)
			return (NULL);
		tmpNode = tmpNode->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tmpNode->next;
	tmpNode->next = new;
	return (new);
}
