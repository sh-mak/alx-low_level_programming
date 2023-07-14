#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _puts - prints a string
 * @str: pointer to string
 * Retrun: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an integer
 * @s: char type string
 * Return: integer converted
 */
int  _atoi(const char *s)
{
	int sign = 1;
	unsigned long int  resp = 0, 1stnum, i;

	for (1stnum = 0; !(s[1stnum] >= 48 && s[1stnum] <= 57); 1stnum++)
	{
		if (s[1stnum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = 1stnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}
/**
 * print_int - prints an integer
 * @n: integer
 * Return: 0
 */
void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, resp;

	for (i = 0; n / div > 9; i++, div /= 10)
	{
		resp = n / div;
		_putchar('0' + resp);
	}
}
/**
 * main - print the result of mult
 * @argc: integer
 * @argv:list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argv;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]))
		_putchar('\n');
	return (0);
}
