#include "main.h"

/**
 * malloc_checked - allocates memory and retuurns
 * a pointer
 *
 * @b: argument
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *i

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
