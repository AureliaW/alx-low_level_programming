#include "main.h"
/**
 * print_sign - Print sign of a number
 *
 * @n: User input
 * Return: Integer on sucess
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (0);
	}
}
