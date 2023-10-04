#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - cobine strings
 * @s1: string one
 * @s2: string two
 * Return: the output
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, b = 0, c = 0, d = 0;

	char *t;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[b])
		b++;

	d = i + b;
	t = malloc((sizeof(char) * d) + 1);

	if (t == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= i)
			t[c] = s1[c];

		if (c >= i)
		{
			t[c] = s2[b];
			b++;
		}

		c++;
	}

	t[c] = '\0';
	return (t);
}

