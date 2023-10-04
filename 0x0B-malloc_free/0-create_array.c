#include "main.h"
#include <stdlib.h>

/**
 * create_array - the function that creates array
 * @size: the size of the array
 * @c: the integer
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
