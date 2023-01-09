#include "main.h"
/**
 * _islower - Checks lower case
 *
 * @c: User input
 *
 * Return: Integer
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
