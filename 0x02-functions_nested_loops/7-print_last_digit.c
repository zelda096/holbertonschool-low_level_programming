#include "holberton.h"
/**
* print_last_digit - entry point
* Des: _islower
* @c: variable
* Return: 0
*/
int print_last_digit(int c)
{
	int x = c % 10;

	if (x < 0)
	{
		x = -x;
		_putchar('0' + x);
		return (x);
	}
	_putchar('0' + x);
	return (x);
}
