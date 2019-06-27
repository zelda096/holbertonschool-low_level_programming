#include "holberton.h"
/**
 * _isdigit - entry point
 * Des: _isdigit
 * @c: int variable
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	int res = 0;

	if (c <= 48 && c <= 57)
	{
		res = 1;
	}
	return (res);
}
