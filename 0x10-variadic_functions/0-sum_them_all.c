#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of its par
 * @n: the used sum
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list keep;

	va_start(keep, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(keep, const unsigned int);
		}
	}
	va_end(keep);
	return (sum);
}
