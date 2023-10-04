#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function that returns a pointer to newly allocated space
 * @str: command to use
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	int b = 0, i = 1;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	p = malloc((sizeof (char) * i) + 1);

	if (p == NULL)
		return (NULL);
	while (b < i)
	{
		p[b] = str[b];
		b++;
	}

	p[b] = '\0';
	return (p);
}
