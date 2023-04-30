#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tail;
	void *ptr = (listint_t *) malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	newNode = (listint_t *) ptr;
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = newNode;
	return (newNode);
}
