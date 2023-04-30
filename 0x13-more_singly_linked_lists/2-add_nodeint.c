#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	void *ptr = (listint_t *) malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	newNode = (listint_t *) ptr;
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
