#include <stdio.h>
/**
 * _sqrt - get a square root
 * @s: input number
 * Return: square root of s
 */
double  _sqrt(double s)
{
	float sqrt, tmp;

	sqrt = s / 2;
	tmp = 0;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (s / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - prints the largest prime factor
 * @num: number to find
 */
void largest_prime_factor(long int num)
{
	int prmnu, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (prmnu = 3; prmnu <= _sqrt(num); prmnu += 2)
	{
		while (num % prmnu == 0)
		{
		num = num / prmnu;
		largest = prmnu;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
