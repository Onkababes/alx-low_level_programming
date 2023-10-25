#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr - function that combines strings
 * @ac: count of arguments
 * @av: array of strings
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int ch = 0;
	int b = 0, c = 0, d = 0;
	char *e;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c]; c++)
			ch++;
	}

	e = malloc(sizeof(char) * (ch + ac + 1));

	if (e == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c]; c++)
		{
			e[d] = av[b][c];
			d++;
		}
		e[d] = '\n';
		d++;
	}

	e[d] = '\0';
	return (e);
}
