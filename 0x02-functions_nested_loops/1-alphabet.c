#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: 0 on sucess
 *
 */
void print_alphabet(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
		_putchar(h);

	_putchar('\n');
}
