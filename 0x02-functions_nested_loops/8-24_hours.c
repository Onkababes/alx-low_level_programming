#include "main.h"

/**
 * jack_bauer - Track everybminute of Jack Bauer daily
 * Return: ...
 */

void jack_bauer(void)

{
	int d, e, f, g;

	for (d = 0; d <= 2; d++)
	{
	for (e = 0; e <= 9; e++)
	{
	if ((d <= 1 && e <= 9) || (d <= 2 && e <= 3))
	{
	for (f = 0; f <= 5; f++)
	{
	for (g = 0; g <= 9; g++)
	{
	_putchar(d + '0');
	_putchar(e + '0');
	_putchar(58);
	_putchar(f + 0);
	_putchar(g + 0);
	_putchar('\n');

	}
