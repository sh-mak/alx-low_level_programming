#include "main.h"
/**
 * print_square - print a square
 * @size: is the size of the square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int row, colm;

	for (row = 1; row <= size; row++)
	{
		for (colm = 1; colm <= size; colm++)
			_putchar('#');
		_putchar('\n');
	}
}
