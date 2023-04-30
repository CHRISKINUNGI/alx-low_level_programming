#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *nextNode;
	unsigned int counter;

	if (*head == NULL)
		return (-1);

	currentNode = *head;

	if (index == 0)
	{
		*head = currentNode->next;
		free(currentNode);
		return (1);
	}

	for (counter = 0; currentNode != NULL && counter < index - 1; counter++)
		currentNode = currentNode->next;

	if (currentNode == NULL || currentNode->next == NULL)
		return (-1);

	nextNode = currentNode->next->next;
	free(currentNode->next);
	currentNode->next = nextNode;

	return (1);
}
