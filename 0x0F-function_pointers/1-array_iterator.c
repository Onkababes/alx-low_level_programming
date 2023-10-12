#include "function_pointers.h"
#include "stdio.h"

/**
 * array_iterator - it executes a function given as a parameter
 * @size: measurement of an array
 * @array: name of the process
 * @action: the pointer to a function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;

	for (b = 0; b < size; b++)
	{
		action(*array);
		array++;
	}
}
