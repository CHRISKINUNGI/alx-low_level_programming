#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *previousNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	previousNode = get_nodeint_at_index(*head, idx - 1);
	if (previousNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = previousNode->next;
	previousNode->next = newNode;
	return (newNode);
}

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list. If the node does not exist,
 * return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int myCounter;

	for (myCounter = 0; myCounter < index; myCounter++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
