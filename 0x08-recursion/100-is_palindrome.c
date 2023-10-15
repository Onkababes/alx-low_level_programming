#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that helps find the length
 *
 * @s: the used value
 * Return: expected length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares strings
 * @s: string
 * @n1: iterator
 * @n2: second iterator
 * Return: none
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that checks for a palindrome
 * @s: string
 * Return: 1 if its palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
