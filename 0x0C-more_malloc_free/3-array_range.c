#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: starting integer
 * @max: max integer
 * Return: array of integer
 */
int *array_range(int min, int max)
{
	int l, i;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr malloc(sizeof(int) * l);
	if (!ptr)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = min++;
	return (ptr);
}
