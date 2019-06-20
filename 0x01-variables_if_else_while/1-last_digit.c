#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: A text
*/
int main(void)
{
	int n;
	int digit;
		
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10
	if (n == 0)
		{
			printf{"%d and is 0\n", n}
		}
	else
	{
		if (n > 5)
		{
			printf{"%d and is greater than 5\n", n}
		}
		else if (n < 6)
		{
			printf{"%d and is less than 6 and not 0", n}
		}
	}
		
	return (0);
}
