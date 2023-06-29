#include "main.h"
/**
 * puts_half - puts half of string
 * @str: the string to print
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	 _putchar('\n');

}
