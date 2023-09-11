#include <stdio.h>
/**
 * main - Sizes a of computers
 * Return: 0 (success)
 */

int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));

	printf("Size of int: %zu bytes\n", sizeof(int));

	printf("Size of float: %zu bytes\n", sizeof(float));

	printf("Size of long: %zu bytes\n", sizeof(long));

	printf("Size of long long: %zu bytes\n", sizeof(long long));

	return (0);
}
