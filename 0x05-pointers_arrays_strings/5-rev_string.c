#include "holberton.h"
/**
 * rev_string - prints a string.
 * @s : var pointer
 * Return: no
 */
void rev_string(char *s)
{
	int x;
	int y = 0;
	int z = 0;
	int a[500];

	for (x = 0; x < 500; x++)
	{
		if (s[x] == '\0')
			break;
		z++;
	}
	for (x = z - 1; x >= 0; x--)
	{
		a[y] = s[x];
		y++;
	}
	for (x = 0; x < z; x++)
	{
		s[x] = a[x];
	}
}
