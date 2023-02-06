#include "main.h"

/**
 * get_endianness - checks for endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *ch;
	int n;

	ch = (char *)&n;
	return (*ch);
}
