#include "main.h"

/**
 * _strncat - the function that concatenate
 * @src: The string to combine
 * @dest: Another string
 * @n: the bytes storer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
	dest_length++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_length++] = src[index];
	return (dest);
}
