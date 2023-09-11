#include <stdio.h>
/**
 * main - Sizes a of computers
 * Return: 0 (success)
 */

int main(void)
{
	char k;
	int l;
	float m;
	long n;
	long long int o;

	printf("Size of char: %zu bytes\n", sizeof(k));
	printf("Size of int: %zu bytes\n", sizeof(l));
	printf("Size of float: %zu bytes\n", sizeof(m));
	printf("Size of long: %zu bytes\n", sizeof(n));
	printf("Size of long long int: %zu bytes\n", sizeof(o));
	return (0);
}
