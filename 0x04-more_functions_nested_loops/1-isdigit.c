#include "holberton.h"
/**
 * _isdigit - entry point
 * Des: _isdigit
 * @c: int variable
 * Return: 1 or 0
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
