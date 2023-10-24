#include "main.h"

/**
 * string_nconcat - function that combines two string
 * @s1: pointer 1
 * @s2: 2nd pointer
 * @n: byte
 * Return: nothing if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t, d, e;
	char *s;

	if (s1 == NULL)
	{
		t = 0;
	}
	else
	{
		for (t = 0; s1[t]; ++t)
			;
	}
	if (s2 == NULL)
	{
		d = 0;
	}
	else
	{
		for (d = 0; s2[d]; ++d)
			;
	}
	if (d > n)
		d = n;
	s = malloc(sizeof(char) * (t + d + 1));
	if (s == NULL)
		return (NULL);
	for (e = 0; e < t; e++)
		s[e] = s1[e];
	for (e = 0; e < d; e++)
		s[e + t] = s2[e];
	s[t + d] = '\0';
	return (s);
}
