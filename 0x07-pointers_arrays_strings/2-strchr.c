#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string to be checked
 * @c: Character looking for
 *
 * Return: a pointer to the first occurrence of the character c in the string
 * @s. Return NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
