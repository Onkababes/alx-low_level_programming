#include "main.h"

/**
 * puts2 - it prints every other character.
 * @str: The command to use
 * Return: none
 */

void puts2(char *str)
{
	int f;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}

	for (f = 0; f < k; f += 2)
	{
		_putchar(str[f]);
	}
	_putchar('\n');
}
