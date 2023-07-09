#include "main.h"
/**
 * _sqrt_recursion - square root of a number
 * @n: integer
 * @v: square root
 * Return: integer
 */
int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finde square root
 * @n: integer to finde square root
 * @v: square root
 * Return: integer
 */
int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}
