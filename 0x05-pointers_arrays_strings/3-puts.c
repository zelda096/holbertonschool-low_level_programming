#include "holberton.h"
/**
 * _puts - print
 *
 * @str: var pointer
 *
 * Return in 0
 */
void _puts(char *str)
{
	int x;

	for (x = 0; x < 500; x++)
	{
		if (str[x] == '\0')
			break;
		
		_putchar(str[x]);
	}
	_putchar('\n');
}
