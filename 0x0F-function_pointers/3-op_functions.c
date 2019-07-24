#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - entry point for sum
 * @a: integer
 * @b: integer
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - entry point for substract
 * @a: integer
 * @b: integer
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - entry point for multiply
 * @a: integer
 * @b: integer
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - entry point for divide
 * @a: integer
 * @b: integer
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - entry point for module
 * @a: integer
 * @b: integer
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
