#include "holberton.h"
/**
* _islower - entry point
* Des: _islower
* @c: variable
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
