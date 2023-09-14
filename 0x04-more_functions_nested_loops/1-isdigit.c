#include "main.h"

/**
 * _isdigit -a funtion that checks for a digit
 * @c: The alphabet to concider within a digit
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
