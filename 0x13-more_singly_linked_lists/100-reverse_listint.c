#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *firstTempNode, *secondTempNode;

	if (*head == NULL)
		return (NULL);
	firstTempNode = *head;
	secondTempNode = firstTempNode->next;
	firstTempNode->next = NULL;
	while (secondTempNode != NULL)
	{
		*head = secondTempNode;
		secondTempNode = secondTempNode->next;
		(*head)->next = firstTempNode;
		firstTempNode = *head;
	}
	return (*head);
}
