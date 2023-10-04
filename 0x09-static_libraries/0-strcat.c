#include "main.h"

/**
 * _strcat - function that combines two strings
 * @src: the used value
 * @dest: used value
 * Return: nothing
 */

char *_strcat(char *dest, char *src)
{
	int o;
	int p;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[o] = src[p];
		o++;
		p++;
	}

	dest[o] = '\0';
	return (dest);
}
