#include "holberton.h"
/**
* _memset - entry point
* @b: pointer variable
* @s: pointer variable
* @n: pointer variable
* Return: Pointer s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 1; x <= n; x++)
		*(s + (x - 1)) = b;
	return (s);
}
