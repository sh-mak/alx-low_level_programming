#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * only using _putchar twice
 * Return: Always 0 (Success)
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
