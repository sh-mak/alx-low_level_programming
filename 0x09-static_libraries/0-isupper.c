#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the check  number
 * Return: 1 for upper letter and 0  for else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
