#include "main.h"
/**
 * print_numbers - print 0 to 9
 * only using _putchar tw0 times
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int nm;

	do {
		_putchar(nm + 48);
		nm++;
	}
	while (nm >= 0 && nm <= 9);
	_putchar('\n');
}
