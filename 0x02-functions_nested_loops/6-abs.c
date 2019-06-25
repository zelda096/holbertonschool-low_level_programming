#include "holberton.h"
/**
* _abs - entry point
* Des: _islower
* @c: variable
* Return: 0
*/
int _abs(int c)
{
	int x;

	if (c > 0)
	{
		x = c;
	}
	else if (c < 0)
	{
		x = -c;
	}
	else
	{
		x = 0;
	}
	return (x);
}
