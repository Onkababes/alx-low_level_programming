#include "main.h"

/**
 * leet - function that encodes string
 * @str: the parameter
 * Return: str
 */
char *leet(char *str)
{
	int i, l;
	char o[] = "aAeEoOtTlL";
	char p[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (l = 0; o[l] != '\0'; l++)
		{
			if (str[i] == o[l])
			{
				str[i] = p[l];
			}
		}
	}
	return (str);
}
