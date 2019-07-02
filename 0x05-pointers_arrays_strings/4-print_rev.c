#include "holberton.h"
/**
 * print_rev - print reverse
 * @s: var pointer
 * Return: no
 */
void print_rev(char *s)
{
	int x;
	int y = 0;

	for (x = 0; x < 500; x++)
	{
		if (s[x] == '\0')
			break;
		y++;
	}
	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
