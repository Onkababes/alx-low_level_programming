#include <stdio.h>

/**
 * main - Print alphabets from last to first
 *
 * Return 0 if succeeds
 */

int main(void)
{
	char k;

	for (k = 'z' ; k >= 'a' ; k--)
		putchar(k);
	putchar('\n');
	return (0);

}
