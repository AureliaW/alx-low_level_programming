#include "main.h"

/**
 * print_rev - prints a string on stdout in reverse
 * @s: The string in question
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	for (i = i - i; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
