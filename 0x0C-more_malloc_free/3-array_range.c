#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum values
 * @max: maximum values
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *pnt;
	int i, len;

	if (max < min)
		return (NULL);

	len = max - min + 1;

	pnt = malloc(sizeof(int) * len);

	if (pnt == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pnt[i] = min++;

	return (pnt);
}
