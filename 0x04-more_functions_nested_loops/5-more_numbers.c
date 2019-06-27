#include "holberton.h"
/**
 * more_numbers - entry point
 * Des: more_numbers
 * void: empty void
 * Return: none
 */
void more_numbers(void)
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar('1');
			}
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
