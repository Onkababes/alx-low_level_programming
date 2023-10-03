#include "main.h"

/**
 * _memcpy - The function that cpoies the memory
 * @dest: memory storer
 * @src: where the memory gets copied from
 * @n: bytes
 * Return: The n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int i = n;

	for (; l < i; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
