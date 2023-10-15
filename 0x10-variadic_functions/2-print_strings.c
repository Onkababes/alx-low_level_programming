#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @separator: string to be printed between strings
 * @n: number of strings
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *hld;

	va_list ldt_hld;

	va_start(ldt_hld, n);

	for (i = 0; i < n; i++)
	{
		hld = va_arg(ldt_hld, char *);

		if (hld == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", hld);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ldt_hld);
}
