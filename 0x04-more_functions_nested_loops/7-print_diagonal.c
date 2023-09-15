#include "main.h"

/**
 * print_diagonal - use the function that shows a diagonal line
 * @n: shows the diagonal line
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, m;

		for (l = 0; l < n; l++)
		{
			for (m = 0; m < n; m++)

		{
			if (m == l)
			_putchar('\\');
			else if (m < l)
			_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
