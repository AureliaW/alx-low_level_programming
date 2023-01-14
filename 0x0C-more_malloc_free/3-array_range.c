#include "main.h"

/**
 * array_range - creates an array and
 * allocates memory to it
 *
 * @min: 1st element
 * @max: last element
 * Return: pointe to array
 *
 */

int *array_range(int min, int max)
{
	int *array, i, length;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	array = malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
