#include "main.h"

/**
 * main - writing alphabets 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	char d;
	int o = 0;

	while (o <= 9)
	{
	for (d <= 'a'; d <= 'z'; d++)
	{
	_putchar(d);

	_putchar('\n');
	o++;
	}
}
