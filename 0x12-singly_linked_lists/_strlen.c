#include <stdio.h>
**
 * _strlen - returns the length of the string
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
        int i = 0;

        if (!s)
                return (0);
        while (*s++)
                i++;
        return (i);
}
