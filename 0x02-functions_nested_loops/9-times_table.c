#include "holberton.h"
/**
* times_table - entry point
* Des: times_table
* Return: 0
*/
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		y = 0;
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			if ((x * y) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x * y + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x * y / 10 + '0');
				_putchar(x * y % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
