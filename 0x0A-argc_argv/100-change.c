#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the minimum number of coins
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int cents, min_coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		min_coin += 1;
	}

	printf("%d\n", min_coin);
	return (0);
}
