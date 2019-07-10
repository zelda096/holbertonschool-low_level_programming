#include "holberton.h"
/**
 * _strlen_recursion - entry point
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
