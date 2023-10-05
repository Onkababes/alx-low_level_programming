#include <stdio.h>

/**
 * main - funtion that prints the numbe of arguments
 * @argc: command function
 * @argv: command array
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
