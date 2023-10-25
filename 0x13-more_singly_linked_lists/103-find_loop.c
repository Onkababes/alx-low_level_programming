#include "lists.h"

/**
 * find_listint_loop - function that finds a loop in a linked list
 * @head: a pointer to the head of the list
 * Return: the address of the node where the loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low, *high;

	if (head == NULL || head->next == NULL)
		return (NULL);

	low = head->next;
	high = head->next->next;

	while (high && high->next)
	{
		if (low == high)
		{
			low = head;

		while (low != high)
		{
			low = low->next;
			high = high->next;
		}

			return (low);
		}

		low = low->next;
		high = high->next->next;
	}

	return (NULL);
}
