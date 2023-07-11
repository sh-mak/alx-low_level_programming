#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a new string which
 * is a duplicate of the string Memory for
 * the new string is obtained and can be freed
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, r = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	m = malloc(sizeof(char) * (i + 1));
	if (m == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
	return (m);
}
