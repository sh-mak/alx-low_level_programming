#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string of separator
 * @n: numbers of arguments
 * @...: integers to print
 * Return: viod
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d\n", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
