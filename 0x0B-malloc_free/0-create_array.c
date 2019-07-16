#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: size of something
 * @c: variable
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arpri = NULL;
	unsigned int character;

	if (size > 0)
	{
		arpri = (char *)malloc(size * sizeof(char));
		if (arpri == NULL)
			return (NULL);
		for (character = 0; character < size; character++)
			arpri[character] = c;
	}
	return (arpri);
}
