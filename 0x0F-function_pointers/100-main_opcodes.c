#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - program that prints the opcodes of its own
 * @n: bytes
 * @a: main function
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
	printf("%.2hhx", a[b]);
	if (b < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - program main function
 * @argv: argument
 * @argc: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	f = atoi(argv[1]);
	if (f < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, f);
	return (0);
}
