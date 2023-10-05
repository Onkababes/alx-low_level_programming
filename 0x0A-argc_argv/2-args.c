#include <stdio.h>

/**
 * main - the funtion that prints all arguments recieved
 * @argc: the usable function
 * @argv: commanding funtion
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}
	return (0);
}
