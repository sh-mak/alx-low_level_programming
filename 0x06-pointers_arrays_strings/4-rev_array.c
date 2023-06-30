#include "main.h"

/**
 * revers_array - revers array of integer
 * @a: point to array
 * @n: number of elements on an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
