#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - command line that shows all the functions
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *op; /* operator */
	int frst1, frst2; /* number inputs */

	if (argc != 4) /* if the number of arguments is wrong */
	{
	printf("Error\n");
	exit(98);
	}

	/* set command argument input */
	frst1 = atoi(argv[1]); /* first number input */
	op = argv[2]; /* operator input */
	frst2 = atoi(argv[3]); /* second number input */

	/* if operator not in the list */
	if (get_op_func(op) == NULL || argv[2][1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	/* if user divides or uses modulus by 0 */
	if ((*op == '/' && frst2 == 0) || (*op == '%' && frst2 == 0))
	{
	printf("Error\n");
	exit(100);
	}

	/* final result */
	printf("%d\n", get_op_func(op)(frst1, frst2));

	return (0);
}
