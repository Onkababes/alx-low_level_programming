#include "main.h"

/**
 * _memcpy - function that copies the memory
 * @src: memory type
 * @dest: memory type
 * @n: copied function
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
