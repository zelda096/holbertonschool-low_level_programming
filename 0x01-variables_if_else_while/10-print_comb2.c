#include <stdio.h>
/**
* main - Entry point
*
* Return: A text
*/
int main(void)
{
	int x = 48;
	int y = 48;

	while (x <= 57 && y <= 57)
	{
		putchar(x);
		putchar(y);
		if (x != 57 || y != 57)
		{
			putchar(44);
			putchar(32);
		}
		y++;
		if (y == 58 && x != 57)
		{
			y = 48;
			x++;
		}
	}
	putchar('\n');
	return (0);
}
