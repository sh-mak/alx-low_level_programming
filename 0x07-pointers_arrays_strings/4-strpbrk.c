include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: strings to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *p;

	while (s[i] != '\0')
	{
		j = 0;
		{
			while (accept[j] != '\0')
				if (accept[j] == s[i])
				{
					p = &s[i];
					return (p);
				}
			j++;
		}
		i++;
	}
	return (0);
}
