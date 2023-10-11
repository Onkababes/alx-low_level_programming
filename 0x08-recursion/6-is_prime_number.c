#include "main.h"
#include <stdio.h>

int lookfor_prime(int n, int i);

/**
 * is_prime_number - function of a prime number
 * @n: value
 * Return: 0
 */
int is_prime_number(int n)
{
	return (lookfor_prime(n, 1));
}

/**
 * lookfor_prime - evaluate a prime number
 * @n: number in question
 * @i: prime checker
 * Return:1 if success 0 if not
 */

int lookfor_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (lookfor_prime(n, i + 1));
}
