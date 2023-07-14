#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_memset - fills memory with a costant byte
 * @s: pointer to put constant
 * @b: constantr
 * @n: max of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigend int n)
{
	char *prt = s;

	while (n--)
		*s++ = b;
	return (prt);
}

/**
 * *_calloc - that allocates memory for an array
 * @nmemb: array length
 * @size: size of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb)
		return (m);
}
