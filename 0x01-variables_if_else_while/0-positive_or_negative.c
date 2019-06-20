#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: A text
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand(0) - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
