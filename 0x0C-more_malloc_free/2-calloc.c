#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @size: the integer
 * @nmemb: an array
 * Return: results
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *l;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = malloc(nmemb * size);
	if (l == NULL)
		return (NULL);
	for (i = 0; i < (nmemb = size); i++)
		l[i] = 0;
	return (l);
}
