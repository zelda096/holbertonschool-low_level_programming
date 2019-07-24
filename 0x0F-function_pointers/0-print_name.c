#include "function_pointers.h"
/**
 * print_name - entry pooint
 * @name: name for print
 * @f: pointer to function
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
