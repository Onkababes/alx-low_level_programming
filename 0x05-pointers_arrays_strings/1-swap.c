#include <stdio.h>

/**
 * swap_int - The functions that swaps value of integers
 * @a: The first integer
 * @b: The second integer
 * Return: non
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
