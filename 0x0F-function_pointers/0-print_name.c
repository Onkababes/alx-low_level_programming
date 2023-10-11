#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - the function that print name
 *
 * @f: the string
 * @name: the name it will release
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
