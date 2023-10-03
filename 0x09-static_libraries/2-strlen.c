#include <stdio.h>

/**
 * _strlen - Returns the length of the string
 * @s: The string to use
 * Return: length of the @s.
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
