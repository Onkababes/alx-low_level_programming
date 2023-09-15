#include <stdio.h>

/**
 * main - a number that prints from 1 to 100
 * Return: 0 Success
 */

int main(void)
{
	int fun;

	for (fun = 1; fun <= 100; fun++)
	{
		if ((fun % 3) == 0 && (fun % 5) == 0)
			printf("FizzBuzz");

		else if ((fun % 3) == 0)
			printf("Fizz");

		else if ((fun % 5) == 0)
			printf("Buzz");

		else
			printf("%d", fun);

		if (fun == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}

