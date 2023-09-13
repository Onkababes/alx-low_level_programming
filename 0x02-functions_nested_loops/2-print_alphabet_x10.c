#include "main.h"

/**
 * print_alphabet_x10 - program that shows alphabets ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabets;
	int d;

	d = 0;

	while (d < 10)
	{
		alphabets = 'a';
		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			alphabets++;
		}
	_putchar('\n');
	d++;
	}
}
