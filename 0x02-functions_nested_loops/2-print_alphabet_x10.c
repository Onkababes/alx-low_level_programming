#include "main.h"

/**
 * print_alphabet_x10 - program that shows alphabets ten times
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
	}
	_putchar('\n');
	o++;

}
