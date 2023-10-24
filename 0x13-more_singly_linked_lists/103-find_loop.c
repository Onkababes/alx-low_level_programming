#include "lists.h"

/**
 * find_listint_loop - function that finds a loop in linked list
 * @head: the pointer
 * Return: the results
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find, loop;

	if (head == NULL || head->next == NULL)
		return (NULL);

	find = head->next;
	loop = (head->next)->next;

	while (loop)
	{
		if (find == loop)
		{
			find = head;

			while (find != loop)

			{
				find = find->next;
				loop = loop->next;
			}
			return (find);
		}

		find = find->next;
		loop = (loop->next)->next;
	}
	return (NULL);
}
