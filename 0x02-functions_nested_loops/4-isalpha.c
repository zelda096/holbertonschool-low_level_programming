#include "holberton.h"
/**
* _isalpha - entry point
* Des: _isalpha
* @c: variable main
* Return: 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
