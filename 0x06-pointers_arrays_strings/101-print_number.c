#include "main.h"
#include <string.h>

/**
 * print_number - number printing function
 * @n: parameter
 *
 * Return: none
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
