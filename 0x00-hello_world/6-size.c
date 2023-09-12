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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
