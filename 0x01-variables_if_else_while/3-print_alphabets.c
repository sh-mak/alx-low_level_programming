#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the small alphabets then the capital alphabets
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = ('a');
	char CH = ('A');

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (Ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
