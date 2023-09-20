#include "main.h"

/**
 * _strncpy - The string that makes a copy
 * @src: The function tho include
 * @dest: The function that brings the finsl results
 * @n: null character
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
	return (dest);
}
