#include "main.h"

/**
 * print_square - use a function that prints a square
 * @size: used as the size of a square
 * Declaration: use character '#' to print the square
 */

void print_square(int size)
{
	int g, h;

	h = 0;

	if (size < 1)
		_putchar('\n');

	while (h < size)
	{
		g = 0;
		while (g < size)
		{
			_putchar('#');
			g++;
		}
		_putchar('\n');
		h++;
	}
}
