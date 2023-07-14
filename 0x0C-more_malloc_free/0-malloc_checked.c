#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: integer
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
