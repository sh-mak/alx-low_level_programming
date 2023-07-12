#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *argstostr - concatenates all the arguments of programs
 * @ac: integer input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i = 0, n = 0, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (r < ac)
	{
		while (av[r][n])
		{
			i++;
			n++;
		}
		n = 0;
		r++;
	}
	str = malloc((sizeof(char) * i) + ac + 1);
	n = 0;
	while (av[n])
	{
		while (av[n][r])
		{
			str[l] = av[n][r];
			l++;
			r++;
		}
		str[l] = '\n';
		r = 0;
		l++;
		n++;
	}
	l++;
	str[l] = '\n';
	return (str);
}
