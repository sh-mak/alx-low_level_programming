#include "main.h"

/**
 * print_line - draws a straight line
 * only use _putchar
 * @n: number of times the character _ should be printed
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar(95);
	}
	_putchar('\n');
}
