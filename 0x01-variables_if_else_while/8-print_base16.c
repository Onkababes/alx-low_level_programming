#include <stdio.h>

/**
 * main - Show numbers up to sixteen in lowercases
 * Return: 0 (Success)
 */

int main(void)
{
	int k;
	char l;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	for (l = 'a' ; l <= 'f' ; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
