#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @str: the string to get the length 
 * Return: the length of  @str
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return(length);
}
