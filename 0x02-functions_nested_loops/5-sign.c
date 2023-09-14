#include "main.h"

/**
 * print_sign - show the sign of a number
 * @n: This is the sign to check on
 * Return: 1 and print a plus sign, 0 if its zero and -1 if its negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
