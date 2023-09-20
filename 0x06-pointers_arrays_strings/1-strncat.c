#include "main.h"
#include <string.h>

/**
 * _strncat - The function that concatenate
 * @src: The funtion to use to get the result
 * @dest: The function to use to the final result
 * @n: The null terminator
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
		dest[len + i] = '\0';
		return (dest);
}
