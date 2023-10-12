#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that get the numbers ordelyly
 * @s: and argument
 * Return: results
 */

int(*get_op_func(char *s)(int, int))
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL}
};
int i;

/* initialise i */
i = 0;

/* s does not match any of the ops */
while (ops[i].op != MULL && *(ops [i].op) != *s)
	i++;
return (ops[i].f); /* return op */
