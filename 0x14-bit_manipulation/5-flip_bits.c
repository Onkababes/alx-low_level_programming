#include "main.h"

/**
 * flip_bits - function returns the number of bits needed to flip.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: results
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int denom = n ^ m;
	unsigned int numb = 0;

	while (denom > 0)
	{
		numb += denom & 1;
		denom >>= 1;
	}

	return (numb);
}
