#include "main.h"

/**
 * _move - function that moves string
 * @mv: moving string
 * @k: length of a string
 * Return: 0
 */
void _move(char *mv, int k)
{
	int i, l;

	i = l = 0;
	while (i < k)
	{
		if (mv[i] != '0')
			l = 1;
		if (l || i == k - 1)
			_putchar(mv[i]);
		i++;
	}

	_putchar('\n');
	free(mv);
}

/**
 * mul - multiplies
 * @d: function
 * @num_in: index
 * @d_in: index
 * @na: string
 * @din: index
 * Return: nothing
 */

char *mul(char d, char *na, int num_in, char *din, int d_in)
{
	int a, b, tims, doi, dda, res;

	doi = res = 0;
	for (a = num_in, b = d_in; a >= 0; a--, b--)
	{
		tims = (d - '0') * (na[a] - '0') + doi;
		doi = tims / 10;
		dda = (din[b] - '0') + (tims % 10) + res;
		res = dda / 10;
		din[b] = dda % 10 + '0';
	}
	for (res += doi; b >= 0 && res; b--)
	{
		dda = (din[b] - '0') + res;
		res = dda / 10;
		din[b] = dda % 10 + '0';
	}
	if (res)
	{
		return (NULL);
	}
	return (din);
}
/**
 * check_num - function that check for numbers
 * @ls: pointer
 * Return: 0
 */

int check_num(char **ls)
{
	int i, a;

	for (i = 1; i < 3; i++)
	{
		for (a = 0; ls[i][a]; a++)
		{
			if (ls[i][a] < '0' || ls[i][a] > 9)
			return (1);
		}
	}
	return (0);
}

/**
 * intial - string that intialise
 * @pnt: pointer
 * @d: distance
 * Return: nothing
 */

void intial(char *pnt, int d)
{
	int i;

	for (i = 0; i < d; i++)
		pnt[i] = '0';
	pnt[i] = '\0';
}
/**
 * main - function that multiplies two number
 * @argv: argument counter
 * @argc: arguments counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int 11, 12, be, ts, t;
	char *b;
	char *c;
	char d[] = "Error\n";

	if (argc != 3 || check_num(argv))
	{
		for (ts = 0; d[ts]; ts++)
			_putchar(d[ts]);
		exit(98);
	}
	for (11 = 0; argv[1][11]; 11++)
		;
	for (12 = 0; argv[2][12]; 12++)
		;
	be = 11 + 12 + 1;
	b = malloc(be * sizeof(char));
	if (b == NULL)
	{
		for (ts = 0; d[ts]; ts++)
			_putchar(d[ts]);
		exit(98);
	}
	initial(be - 1);
	for (ts = 12 - 1, i = 0; ts >= 0; ts--, i++)
	{
		c = tims(argv[2][ts], argv[1], 11 - 1, b, (be - 2) - t);
		if (c == NULL)
		{
			for (ts = 0; d[ts]; ts++)
				_putchar(d[ts]);
			free(a);
			exit(98);
		}
	}
	_move(b, be - 1);
	return (0);
}
