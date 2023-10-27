#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *end = (char *)&num;

	if (*end)
		return (1);
	else
		return (0);
}
