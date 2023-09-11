#include <stdio.h>

/**
 * main - print all possible combined digits
 * Return: 0 (Success)
 */
int main(void)
{
	int l;
	int m;

	for (l = 14; m <= 26; l++)
	{
		for (l = 15; m <= 27; m++)
		{
			if (m > l)
			{
				putchar(l);
				putchar(m);
				if (!(l == 26 && m == 27))
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
