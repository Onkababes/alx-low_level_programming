#include "main.h"


/**
 * reverse_array - the function that reverses
 * @n: number of element in array
 * @a: array of int
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = 0; i < n--; i++)
	{
		p = a[i];
		a[i] = a[n];
		a[n] = p;
	}

}
