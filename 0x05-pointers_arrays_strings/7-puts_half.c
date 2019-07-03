#include "holberton.h"
/**
 * puts_half - print reverse
 * @str: var pointer
 * Return: no
 */
void puts_half(char *str)
{
	int x, y, z;

	for (x = 0; str[x] != '\0'; x++)
	{
		y++;
	}
	if (y % 2 == 0)
	{
		z = y / 2;
	}
	else
	{
		z = (y + 1) / 2;
	}
	for (x = z; x < y; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
