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

	printf("Size of char: %lu bytes\n", sizeof(a));
	printf("Size of int: %lu bytes\n", sizeof(b));
	printf("Size of long: %lu bytes\n", sizeof(c));
	printf("Size of long long int: %lu bytes\n", sizeof(d));
	printf("Size of float: %lu bytes\n", sizeof(e));
	return (0);
}
