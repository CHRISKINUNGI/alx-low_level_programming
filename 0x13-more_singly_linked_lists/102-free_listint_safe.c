#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count;
	listint_t *currentNode, *tempNode;

	count = 0;

	if (!head || !*head)
		return (0);

	currentNode = *head;
	*head = NULL;

	while (currentNode)
	{
		count++;
		tempNode = currentNode;
		currentNode = currentNode->next;
		free(tempNode);
		if (tempNode <= currentNode)
			break;
	}

	return (count);
}
