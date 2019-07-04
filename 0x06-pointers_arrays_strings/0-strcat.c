#include "holberton.h"
/**
 * _strcat - function para concatenate
 *@dest: pointer variable
 *@src: pointer variable two
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x++] = src[y++];
	}
	dest[x] = src[y];
	return (dest);
}
