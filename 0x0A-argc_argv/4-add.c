#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the sum of numbers
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
