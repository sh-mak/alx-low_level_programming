#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the number to be checked
 * Return: 1 for a character will be digit, 0 for else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
