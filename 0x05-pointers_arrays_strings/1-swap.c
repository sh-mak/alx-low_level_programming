#include "main.h"
/**
 * swap _ int - swaps the values of two integers
 * using two input parameters
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: nothing
 */
void swap_int(int *a, int *b);
/* the functoin swap_int  that swaps the values of two integers */
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
