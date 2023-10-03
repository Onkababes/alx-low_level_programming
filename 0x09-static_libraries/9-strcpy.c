#include "main.h"

/**
 * _strcpy - string copying
 * @src: the function that copies the value
 * @dest: the return value
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int l;
for (l = 0; src[l] != '\0'; l++)
{
dest[l] = src[l];
}
dest[l++] = '\0';
return (dest);
}
