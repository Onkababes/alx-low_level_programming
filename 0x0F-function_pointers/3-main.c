#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - command line that show all the functions
 * @argv: an argument
 * @argc: an argument
 * Return: results
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *op; /* operator */
	int frst1, frst2; /* number inputs */

	if (argc != 4) /* if argument is wrong */
	{
		printf("Error\n");
		exit(98);
	}

	/* set cmd argument input */
	frst1 = atoi(argv[1]); /* first number input */
	op = (argv[2]); /* operator input */
	frst2 = atoi(argv[3]); /* second number input */

	/* if operator not in the list */
	if (get_op_fun(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if user divides or use modulus y 0 */
	if ((*op == '/' && frst2 == 0) || (*op == '%' && frst2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* final results */
	printf("%d\n", get_op_fun(op)(frst1, frst2));

	return (0);
}
