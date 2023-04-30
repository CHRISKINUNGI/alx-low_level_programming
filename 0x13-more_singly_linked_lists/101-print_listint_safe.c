#include "lists.h"


/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
*/



/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int counter;
	const listint_t *tempNode;
	
	if (head == NULL)
		return (98);
	tempNode = head;
	do
	{
		printf("[%p] %d\n",(void *) &tempNode, tempNode->n);
		tempNode = tempNode->next;
		counter++;
	} while (tempNode != head);
	return (counter);
	
}