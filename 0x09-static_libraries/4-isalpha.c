#include "main.h"

/**
 * _isalpha - print the alpahbetic charecter
 * @c: This is the charecter to print
 * Return: 1 if success, 0 if otherwise
 */

int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
