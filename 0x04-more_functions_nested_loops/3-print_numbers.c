#include "main.h"
/**
 * print_numbers - print 0 to 9
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int nm;

	do {
		/*only using _putchar two times*/

		_putchar(nm + 48);
		nm++;
	}
	while (nm >= 0 && nm <= 9);
	_putchar('\n');
}
