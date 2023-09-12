#include <stdio.h>

/**
 * main - Sizes a of computers
 *
 * Return: 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float e;

	printf("Size of char: %lu byte(s)\n", sizeof(a));
	printf("Size of int: %lu byte(s)\n", sizeof(b));
	printf("Size of long: %lu byte(s)\n", sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of float: %lu byte(s)\n", sizeof(e));
	return (0);
}
