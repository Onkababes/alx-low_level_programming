#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers
 * @separator: string to be printed
 * @n: number of integers passed to the function
 * Return: 0 if separator don't print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, hld;

	va_list ldt;

	va_start(ldt, n);

	for (i = 0; i < n; i++)
	{
		hld = va_arg(ldt, const unsigned int);
			printf("%d", hld);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ldt);
}
