#include "holberton.h"
/**
* print_sign - entry point
* Des: _islower
* @n: variable int
* Return: 0, 1, -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
