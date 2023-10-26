#include "variadic_functions.h"
/**
 * print_all - the function that prints anything
 * @format: an argument type
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i, look = 0; /* declare variables and va_arg datatypes*/
	char *hld;
	va_list ltd;

	va_start(ltd, format); /* initialise argumenets*/

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ltd, int));
				look = 0; /* look for the results */
				break;
			case 'f':
				printf("%f", va_arg(ltd, double));
				look = 0;
				break;
			case 'c':
				printf("%c", va_arg(ltd, int));
				look = 0;
				break;
			case 's':
				hld = va_arg(ltd, char *);
				if (hld == NULL)
					hld = "(nil)";
				printf("%s", hld);
				look = 0;
				break;
			default:
				look = 1;
				break;
		}
		if (format[i + 1] != '\0' && look == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ltd);
}
