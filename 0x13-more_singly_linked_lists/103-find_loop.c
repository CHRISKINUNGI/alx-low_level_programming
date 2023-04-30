#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: the address of the node where the loop
 * starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *startPosition, *finishPosition;

	startPosition = head;
	finishPosition = head;

	while (finishPosition && finishPosition->next)
	{
		startPosition = startPosition->next;
		finishPosition = finishPosition->next->next;

		if (startPosition == finishPosition)
		{
			startPosition = head;

			while (startPosition != finishPosition)
			{
				startPosition = startPosition->next;
				finishPosition = finishPosition->next;
			}
			return (startPosition);
		}
	}
	return (NULL);
}
