#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - entry point
 * @s: argument of operator for the program
 * Return: funct pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int operator = 0;

	while (operator < 5)
	{
		if (ops[operator].op[0] == s[0])
			return (ops[operator].f);
		operator++;
	}
	return (NULL);
}
