#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The last number is five
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (o > 5)
		printf("Last digit of %d is %d and is greater than 5", n, o);
	else if (o == 0)
		printf("Last digit of %d is %d and is zero", n, o);
	else
		printf("Last digits of %d is %d and is less than 6 and not 0", n, o);
	printf("\n")
	return (0);
}