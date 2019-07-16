#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - entry point
 * Description: concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: s1,s2 concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int x;
	int y;
	int z;

	z = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		;

	for (y = 0; s2[y]; y++)
		;

	ptr = malloc((x + y + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (z = 0; s1 && s1[z]; z++)
		ptr[z] = s1[z];
	ptr[z] = '\0';

	for (z = 0; s2 && s2[z]; z++)
		ptr[x + z] = s2[z];
	ptr[x + z] = '\0';

	return (ptr);
}
