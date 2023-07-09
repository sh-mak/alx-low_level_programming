#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - the input integer is a prime number
 * @ot: integer
 * @n: integer
 * Return: 0 or 1
 */
int check_prime(int n, int ot);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 *check_prime - check all numbers < n
 *@n: integer
 *@ot: integer
 *Return: integer
 */
int check_prime(int n, int ot)
{
	if (ot >= n && n > 1)
		return (1);
	else if (n % ot == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, ot + 1));
}
