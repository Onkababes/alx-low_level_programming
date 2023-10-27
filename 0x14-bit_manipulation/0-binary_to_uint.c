#include "main.h"

/**
 * binary_to_uint - function that converts binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int meas, t, c, add, mor;
	int slop;

	slop = 2;
	add = 0;
	mor = 1;

	if (b == NULL)
		return (0);
	for (meas = 0; b[meas] != '\0'; meas++)
		;
	if (meas == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - '0');

	for (t = 0; b[t] != '\0'; t++)
	{
		if (b[t] != '0' && b[t] != '1')
			return (0);
		for (c = meas - 1; c > 0; c--)
		mor = mor * slop;
		add = add + (mor * (b[t] - '0'));
		meas--;
		mor = 1;
	}
	return (add);
}
