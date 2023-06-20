#include <stdio.h>
/**
 *main Entry point
 *
 *Description: print from 0 to 9 by using putchar two times
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
