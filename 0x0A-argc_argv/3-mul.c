#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program that multiplies two numbers
 * @argc: the command
 * @argv: the command
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
