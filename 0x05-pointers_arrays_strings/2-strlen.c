#include "holberton.h"
/**
 * _strlen - strings.
 *
 * @s: var pointer
 *
 * Return: in begin
 */
int _strlen(char *s)
{
	int begin = 0;
	int x;

	for (x = 0; x < 500; x++)
	{
		if (s[x] == '\0')
			break;

		begin++;
	}
	return (begin);
}
