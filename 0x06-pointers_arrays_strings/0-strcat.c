#include "main.h"

/**
 * *_strcat - concatenates two functions
 * @dest: first argument
 * @src: second argument
 * Return: Returns concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
		i++;
	for (j = 0; *(src + j) != '\0'; j++)
		*(dest + (j + i)) = *(src + j);

	return (dest);
}
