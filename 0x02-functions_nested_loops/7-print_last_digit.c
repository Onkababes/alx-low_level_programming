#include "main.h"

/**
 * print_last_digit -show the last digit of a number
 * @n: The last number
 * Return: The digit of the last number
 */

int print_last_digit(int n)
{
	int end;

	end = n % 10;
	if (end < 10)
	{
	end = end * -1;
	}
	_putchar(end + '0');
	return (end);
}
