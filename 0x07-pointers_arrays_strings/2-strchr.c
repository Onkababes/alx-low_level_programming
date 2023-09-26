#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates the character
 * @c: the character
 * @s: the string
 * Return: to c if success and NULL if no success
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
