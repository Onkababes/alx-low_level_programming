#include "lists.h"

/**
 * _e - a function that s called an array
 * @memo: the information inside
 * @li: the empty file
 * @node: new function
 * Return: pointer
 */

const listint_t **_e(const listint_t **memo, size_t li, const listint_t *node)
{
	const listint_t **infor;
	size_t t;

	infor = malloc(sizeof(listint_t *));
	if (infor == NULL)
	{
		free(memo);
		exit(98);
	}
	for (t = 0; t < li - 1; t++)
		infor[t] = memo[t];
	infor[t] = node;
	free(memo);
	return (infor);
}

/**
 * print_listint_safe - function that prints linked list
 * @head: the pointer
 * Return: 98 if it fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t t, yes = 0;
	const listint_t **memo = NULL;

	while (head != NULL)
	{
		for (t = 0; t < yes; t++)
		{
			if (head == memo[t])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(memo);
				return (yes);
			}
		}
		yes++;
		memo = _e(memo, yes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(memo);
	return (yes);
}
