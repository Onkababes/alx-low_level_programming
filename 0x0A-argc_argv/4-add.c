#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - funtion that add number
 * @argc: the command line
 * @argv: command program
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int b, c, add = 0;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (!isdigit(argv[b][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[b]);
	}
	printf("%d\n", add);
	return (0);
}
