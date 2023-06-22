#include "main.h"

/**
 * main Entry point
 *
 * Description:  function that checks for alphabetic character.
 *
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
