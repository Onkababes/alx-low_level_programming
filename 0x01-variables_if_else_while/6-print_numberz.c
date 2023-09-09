#include <stdio.h>

/**
 * main - Show the single digit number below ten
 * Return: succes 0
 */
int main(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	putchar('\n');
	return (0);
}
