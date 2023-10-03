#include "main.h"

/**
 * _memset - The function that sets the memory
 * @s: Where the memory needs to be set
 * @b: The value
 * @n: The number of bytes
 * Return: value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
