#include "main.h"

/**
 * create_array - creates array of characters
 * @size: size of array
 * @c: character to populate array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
		return (NULL);
	i = malloc(size * sizeof(char));
	if (i == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}
	return (i);
}
