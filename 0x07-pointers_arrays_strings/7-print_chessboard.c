#include "main.h"

/**
 * print_chessboard - the function that print the chessboard
 * @a: an array
 * Return 0 if success
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}
