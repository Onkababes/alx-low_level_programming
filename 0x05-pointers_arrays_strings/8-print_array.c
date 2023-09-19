#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints an array
 * @a: is a pointer
 * @n: number of elements to be printed
 * Return: none
 */

void print_array(int *a, int n)
{
	int o;

	for (o = 0; o < n; o++)
	{
		printf("%d", a[o]);
		if (0 != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
