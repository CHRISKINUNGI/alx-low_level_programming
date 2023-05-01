#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *firstNode, *lastNode;
	size_t myCount;

	myCount = 0;
	firstNode = head;
	lastNode = head;

	if (head == NULL)
		exit(98);

	while (firstNode && lastNode && lastNode->next)
	{
		firstNode = firstNode->next;
		lastNode = lastNode->next->next;
		myCount++;

		if (firstNode == lastNode)
		{
			printf("[%p] %d\n", (void *)firstNode, firstNode->n);
			firstNode = firstNode->next;
			while (firstNode != lastNode)
			{
				printf("[%p] %d\n", (void *)firstNode, firstNode->n);
				firstNode = firstNode->next;
				myCount++;
			}
			printf("[%p] %d\n", (void *)firstNode, firstNode->n);
			printf("-> [%p] %d\n", (void *)lastNode, lastNode->n);
			return (myCount);
		}
		printf("[%p] %d\n", (void *)firstNode, firstNode->n);
	}
	return (myCount);
}
