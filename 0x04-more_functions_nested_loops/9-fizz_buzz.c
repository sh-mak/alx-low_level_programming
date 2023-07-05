#include "main.h"
#include <stdio.h>
/**
 * main - print the numbers from 1 to 100, followed by a new line
 * multiples of three print Fizz instead of the number
 *  multiples of five print Buzz. For numbers
 *  which are multiples of both three and five print FizzBuzz
 *  Each number or word should be separated by a space
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int nm;

	for (nm = 1; nm <= 100; nm++)
	{
		if (nm % 3 == 0 && !(nm % 5 == 0))
			printf("Fizz");
		else if (nm % 5 == 0 && !(nm % 3 == 0))
			printf("Buzz");
		else if (nm % 3 == 0 && nm % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", nm);
		if (nm != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
