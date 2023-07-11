#include <stdio.h>
/**
 * main - print number of the argument
 * @argc: the number of the argument
 * @argv: the array of the argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
