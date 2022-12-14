#include "main.h"
/**
 * print_last_digit - shows last digit
 * of a number
 * @i: input in integer format
 * Return: value of last digit
 *
 *
 */

int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		j = (i % 10) * -1;
	}
	else
	{
		j = i % 10;
	}
	_putchar(j + '0');
	return (j);
}
