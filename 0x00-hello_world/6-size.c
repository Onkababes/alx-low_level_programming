#include <stdio.h>
/**
 * main - Sizes a of computers
 * Return: 0 (success)
 */

int main(void)
{
	char k;
	int l;
	long n;
	long long int o;
	float m;

	printf("Size of char: %zu bytes\n", (unsigned long)sizeof(k));
	printf("Size of int: %zu bytes\n", (unsigned long)sizeof(l));
	printf("Size of long: %zu bytes\n", (unsigned long)sizeof(n));
	printf("Size of long long int: %zu bytes\n", (unsigned long)sizeof(o));
	printf("Size of float: %zu bytes\n", (unsigned long)sizeof(m));
	return (0);
}
