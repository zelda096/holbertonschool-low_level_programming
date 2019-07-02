#include "holberton.h"
/**
 * puts_half - print reverse
 * @str: var pointer
 * Return: no
 */
void puts_half(char *str)
{
	{
	int x;
	int z = 0;

	for (x = 0; x < 500; x++)
	{
		if (str[x] == '\0')
			break;
		z++;
	}
	if (z % 2 != 0)
	{
		for (x = (z / 2) + 1; x < z; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		for (x = z / 2; x < z; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
}
