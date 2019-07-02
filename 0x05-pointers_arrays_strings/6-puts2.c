#include "holberton.h"
/**
 * puts2 - print str
 * @str : var pointer
 * Return: no
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	for (x = 0; x < 500; x++)
	{
		if (str[x] == '\0')
			break;
		y++;
	}
	for (x = 0; x < y; x += 2)
	{
		if (str[x] == '\0')
			break;
		_putchar(str[x]);
	}
	_putchar('\n');
}
