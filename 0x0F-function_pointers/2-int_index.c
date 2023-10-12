#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: what we use to calculate
 * @cmp: a pointer to a function
 * @size: number of elements
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}

	return (-1);
}
