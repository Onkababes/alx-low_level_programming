#include "main.h"

/**
 * _puts - The funtion that prints string and new line
 * @str: The command to use
 * Return: non
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}
