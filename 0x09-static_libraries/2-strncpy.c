#include "main.h"
#include <string.h>

/**
 * _strncpy - The string that makes a copy
 * @src: The function tho include
 * @dest: The function that brings the finsl results
 * @n: null character
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srclen = 0;

	while (src[index++])
	srclen++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = srclen; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
