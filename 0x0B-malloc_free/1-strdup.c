<<<<<<< HEAD
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * char *_strdup(char *str) - function returns a pointer to a new string which is a duplicate
 * @str: pointer variable
 * Return: NULL
 */
char *_strdup(char *str)
{}
=======
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - entry point
 * Description: returns a pointer to a new space in memory and cp stng
 * @str: string to cp
 * Return: * to memory block - cp of str
 */
char *_strdup(char *str)
{
	char *pr = NULL;
	unsigned int mem;
	unsigned int size;

	size = 0;

	if (str == NULL)
		return (NULL);

	for (mem = 0; str[mem] != '\0'; mem++)
	{
		size++;
	}

	pr = (char *)malloc((size + 1) * sizeof(char));

	if (pr != NULL)
	{
		for (mem = 0; mem < size; mem++)
			pr[mem] = str[mem];
	}
	else
		pr = NULL;

	return (pr);
}
>>>>>>> 072aa2f8da9cfb6280ff52eb606ec2bcaf5c4d97
