#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first value
 * @s2: second value
 * Return: s1[1] - s]2]
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[1] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[2])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
