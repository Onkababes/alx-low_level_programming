#include "main.h"

/**
 * _memset - function that fills the memory with constant byte
 * @s: Area memory pointed to
 * @b: constant byte
 * @n: the first to be filled by function
 * Return: s if success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
