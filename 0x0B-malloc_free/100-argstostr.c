#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr - function that combines two strings
 * @ac: the function that counts
 * @av: The function that counts
 * Return: NULL
 */

char *argstostr(int ac, char **av)
{
	int ch = 0;
	int b = 0, c = 0, d = 0;
	char *e;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][c])
		{
			ch++;
			c++;
		}

		c = 0;
		b++;
	}

	e = malloc((sizeof(char) * ch) + ac + 1);

	c = 0;
	while (av[b])
	{

		while (av[b][c])
		{
			e[d] = av[b][c];
			d++;
			c++;
		}

		e[d] = '\n';

		c = 0;
		d++;
		b++;
	}

	d++;
	e[d] = '\0';
	return (e);
}

