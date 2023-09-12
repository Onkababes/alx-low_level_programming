#include <stdio.h>
/**
 * main - two two digit number
 * Return: 0 Success
 */

int main(void)
{
	int y;
	int z;

	for (y = 0; y < 100; y++)
	{
		for (z = 1; z < 100; z++)
		{
			if (y < z)
			{
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				if (y != 98 || y != 99)
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
