#include "holberton.h"
/**
 * _strncat - function para concatenate
 *@dest: pointer variable
 *@src: pointer variable two
 *@n: variable
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x++] = src[y++];
	}
	dest[x] = '\0';
	return (dest);
}
