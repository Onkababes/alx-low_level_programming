#include "main.h"

/**
 * _isdigit -a funtion that checks for a digit
 * @c: The alphabet to concider within a digit
 * Return: 1 if is is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
