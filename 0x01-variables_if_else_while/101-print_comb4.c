#include <stdio.h>
/**
 * main - double numbers
 * Return: 0 Success
 */

int main(void)
{
	int o;
	int p;
	int q;

	for (o = 48; o < 58; o++)
	{
		for (p = 49; p < 58; p++)
		{
			for (q = 50; q < 58; q++)
			{
				if (o > p && p > q)
				{
					putchar(o);
					putchar(p);
					putchar(q);
					if (o != 55 || p != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
