#include "main.h"

/**
 *_isalpha - function that checks for alphabetic character.
 *@c: take input from other function
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
