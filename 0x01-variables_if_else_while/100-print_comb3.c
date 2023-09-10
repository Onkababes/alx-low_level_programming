#include <stdio.h>

/**
 * main - print all possible combined digits
 * Return: 0 (Success)
 */
int main(void)
{
	int l, m;

	l = '0';
	m = '0';

	while (l <= '9')
	{
		while (m <= '9')
		{
			if (l < m)
			{
				putchar(l);
				putchar(m);
				if (l != '8' || (l == '8' && m  != '9'))
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
