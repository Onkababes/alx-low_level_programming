#include "main.h"
#include <stdio.h>

/**
 * print_rev - The func that prints in reverse
 * @s: The function to utilise
 * Return: non
 */

void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
	b++;
	}

	for (b -= 1; b >= 0; b--)
	{
	_putchar(s[b]);
	}
	putchar('\n');
}
