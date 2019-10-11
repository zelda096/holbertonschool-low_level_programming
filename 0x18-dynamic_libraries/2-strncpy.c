#include "holberton.h"
/**
 * _strncpy - function for copy
 *@dest: pointer variable
 *@src: pointer variable two
 *@n: variable
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x++] = '\0';
	}
	return (dest);
}
