#include "main.h"
/**
 * _memset - ills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: wante value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}