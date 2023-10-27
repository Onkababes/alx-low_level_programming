#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted.
 */
void print_binary(unsigned long int n)
{
	unsigned long int invi = 1;
	int meas = sizeof(unsigned long int) * 8;
	int sign = 0;

	invi <<= meas - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (invi != 0)
	{
		if ((n & invi) != 0)
		{
			sign = 1;
			_putchar('1');
		}
		else if (sign == 1)
		{
			_putchar('0');
		}
		invi >>= 1;
	}
}
