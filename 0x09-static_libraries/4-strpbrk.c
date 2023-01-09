#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: the string to search
 * @accept: bytes to search for
 *
 * Return: a pointer to the byte in @s
 * @accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
