#include "main.h"
#include <stdio.h>

/**
 * rot13 - The function that encode a string
 * @str: the function to use
 * Return: str
 */

char *rot13(char *str)
{
	int i, l;
	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

	for (i = 0; str[i] != '\0'; i++)
	{
		for (l = 0; m[l] != '\0'; l++)
		{
			if (str[i] == m[l])
			{
				str[i] = n[l];
				break;
			}
		}
	}
	return (str);
}
