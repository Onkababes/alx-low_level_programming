#include "main.h"
#include <stdio.h>

/**
 * _strcat - The function that joins two strings.
 * @dest: - Reurn point
 * @src: The string that appends
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0, i;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;

	for (i = 0; src[i] != '\0'; i++)
		srclen++;

	for (i = 0; i <= srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
