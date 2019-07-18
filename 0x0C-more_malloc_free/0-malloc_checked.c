
#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - entry point
* @b: size of mem.
* Return: pointer to mem, failure = 98.
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		free(mem);
		exit(98);
	}
	return (mem);
}
