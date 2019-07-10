#include "holberton.h"
/**
 * _sqrt_recursion - entry point
 * @n: int
 * Return: n square root -1 if no square root
*/
int _sqrt_recursion(int n)
{
	return (sqrt_nl_root(n, 1));
}
/**
 * sqrt_nl_root - entry point
 * @i: int
 * @j: int
 * Return: square root
 */
int sqrt_nl_root(int i, int j)
{
	int square = j * j;

	if (square > i)
		return (-1);
	if (square == i)
		return (j);
	else
		return (sqrt_nl_root(i, j + 1));

}
