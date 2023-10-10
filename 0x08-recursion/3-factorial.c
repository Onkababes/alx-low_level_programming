#include "main.h"
#include <stdio.h>

/**
 * factorial - the function that returns factorial number
 * @n: the given number
 * Return: negative one
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
