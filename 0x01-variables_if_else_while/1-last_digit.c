#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Write the only the last digit of the of the answer
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;
	if (o > 5)
	{
		printf("Last digit of %d is %d and greater than 5", n, o);
	}
	else if (o == 0)
	{
		printf("Last digit of %d is %d and is zero", n, o);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, o);
	}
	printf("\n");
	return (0);
}
