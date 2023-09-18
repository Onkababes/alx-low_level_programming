#include "main.h"

/**
 * puts_half - The function that prints half string
 * @str: character to print
 * Return: none
 */

void puts_half(char *str)
{
	int l = 0;
	int p;

	while (str[l] != '\0')
	{
	l++;
	}
	if (l % 2 == 1)
	{
	p = (l - 1) / 2;
	p += 1;
	}
	else
	{
	p = l / 2;
	}
	for (; p < l; p++)
	{
	_putchar(str[p]);
	}
	_putchar('\n');
}
