#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @needle: a substring
 * @haystack: a string
 * Return: Null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{

			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
