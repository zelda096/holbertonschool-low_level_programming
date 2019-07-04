#include "holberton.h"
/**
 * _strcmp - function for compares
 *@s1: pointer variable
 *@s2: pointer variable two
 *Return: total
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int total;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
		{
			x++;
		}
	total = s1[x] - s2[x];
	return (total);
}
