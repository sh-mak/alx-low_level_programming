#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print out all the alphabet
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch'\n');
		ch++;
	}
	return (0);
}