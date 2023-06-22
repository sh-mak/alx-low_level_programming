#include "main.h"

/**
 * main Entry point
 * function that prints the sign of a number.
 *Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero
 *
 *Return: Always 0 "Success"
*/
int print_sign(int n)
{
	if(n < 0)
	{
		_putchar(43);
	retur(1);
	}
	else if  (n == 0)
	{
		_putchar(48);
	return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	

}
