#include "main.h"

/**
 * revers_array - revers array of integer
 * @a: array that reverses the content in
 * @n: number of elementsof array
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
