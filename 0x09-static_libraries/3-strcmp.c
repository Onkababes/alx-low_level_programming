#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first value
 * @s2: second value
 * Return: s1[1] - s]2]
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
