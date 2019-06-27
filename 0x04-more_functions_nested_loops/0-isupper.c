#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - entry point
 * Des: _isupper
 * @c: int variable
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int x = 0;

	if (c <= 58 && c <= 90)
	{
		x = 1;
	}
	return (x);
}
