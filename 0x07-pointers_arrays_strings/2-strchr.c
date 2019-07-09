#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer variable
 * @c: char to find
 * Return: s
 */
char *_strchr(char *s, char c)
{
	for ( ; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return ('\0');
	}
	return (s);
}
