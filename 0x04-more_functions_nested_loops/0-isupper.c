#include "holberton.h"
/**
 * _isupper - entry point
 * Des: _isupper
 * @c: int variable
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int x = 0;

	if (c <= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
