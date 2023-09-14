#include "main.h"

/**
 * print_last_digit - Show the last digit of a number
 * @n: The last number to be focused on
 * Return: The digit of the last number
 */

int print_last_digit(int n)
{
	int end;

	end = n % 10;
	if (end < 0)
	{
	end = end * -1;
	}
	_putchar(end + '0');
	return (end);
}
