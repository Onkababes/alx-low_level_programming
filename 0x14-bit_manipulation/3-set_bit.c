#include "main.h"

/**
 * set_bit - function that sets the value of a bit.
 * @n: A pointer.
 * @index: The index of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
