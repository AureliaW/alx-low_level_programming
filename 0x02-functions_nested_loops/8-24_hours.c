#include "main.h"

/**
 * jack_bauer - Prints time in 24's format
 *
 * Return: nothing
 *
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 00; m < 60; m++)
		{
			int h1 = (h / 10) + 48;
			int h2 = (h % 10) + 48;
			int m1 = (m / 10) + 48;
			int m2 = (m % 10) + 48;

			_putchar(h1);
			_putchar(h2);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar('\n');
		}
	}
}
