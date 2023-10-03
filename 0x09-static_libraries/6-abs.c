#include "main.h"

/**
 * _abs - funtion that computes the value of integer
 * @c: The number to compute
 * Return: all the value of number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
