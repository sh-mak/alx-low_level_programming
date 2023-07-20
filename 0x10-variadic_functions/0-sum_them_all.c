#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sum variabale arguments
* @n: number of the arguments
* @...: integers to sum
* Return: integer sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
