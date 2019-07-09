#include <stdio.h>
/**
 * set_string - entry point
 * @s: pointer to char
 * @to: char to set pointer to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
