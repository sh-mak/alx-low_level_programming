#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @n: takes nuber input
 * Return: lastdigit
 */
int print_last_digit(int n)
{
	int lastdig;

	lastdig = n % 10;
	if (lastdig < 0)
	{
		lastdig = lastdig * -1;
	}
	_putchar(lastdig + '0');
	return (lastdig);
}
