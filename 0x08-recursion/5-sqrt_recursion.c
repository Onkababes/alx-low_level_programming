#include "main.h"

/**
 * sqrt_a - a function that returns a natural square root
 * @y: the root
 * @x: the used root
 * Return: minus one
 */
int sqrt_a(int y, int x)
{
	if (x * x == y)
	{
		return (x);
	}

	else if (x * x > y)
	{
		return (-1);
	}
	return (sqrt_a(y,  x + 1));
}
/**
 * _sqrt_recursion - function that creates the square root
 * @n: used root
 * Return: answer received
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
