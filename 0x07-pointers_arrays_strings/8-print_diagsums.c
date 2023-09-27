#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that print two diagonals
 * @a: function
 * @size: measuring tool
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int c, b, sum = 0, sum2 = 0;

	for (c = 0; c <= (size * size); c = c + size + 1)
		sum = sum + a[c];

	for (b = size - 1; b <= (size * size) - size; b = b + size - 1)
	sum2 = sum2 + a[b];
	printf("%d, %d\n", sum, sum2);
}
