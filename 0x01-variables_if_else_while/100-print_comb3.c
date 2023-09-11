#include <stdio.h>

/**
 * main - print all possible combined digits
 * Return: 0 (Success)
 */
int main(void)
{
	int l;
	int m;

	for (l = 48; l <= 56; l++)
	{
		for (m = 56; m <= 57; m++)
		{
			if (m > l)
			{
				putchar(l);
				putchar(m);
				if (!(l == 56 && m == 57))
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
