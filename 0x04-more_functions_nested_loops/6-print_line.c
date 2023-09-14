#include "main.h"

/**
 * print_line - The function that draws a straight line
 * @n: is the number of times a charecter must be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int f;

		for (f = 1; f <= n; f++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
