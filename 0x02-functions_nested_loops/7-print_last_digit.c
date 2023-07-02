#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @n: takes nuber input
 * Return: lastdigit
 */
int print_last_digit(int n)
{
	int lastdig;

	if (n < 0)
		lastdig = -1 * (n % 10);
	else
		lastdig = n % 10;
	putchar(lastdig + "0");
	return (lastdig);
}
