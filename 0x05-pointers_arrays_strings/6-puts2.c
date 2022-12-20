#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: argument of puts function
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i = i + 2)
	{
		if (i > 0 && *(str + i - i) == '\0')
			break;
		_putchar(*(str + i));
	}
	_putchar('\n');
}
