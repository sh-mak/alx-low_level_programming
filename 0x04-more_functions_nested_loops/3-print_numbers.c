#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: the nubers since 0 up to 9
 */
void print_numbers(void)
{
	int nm;

	for (nm = 0; nm <= 9; nm++)
	{
		_putchar(nm + '0');
	}
	_putchar('\n');
}
