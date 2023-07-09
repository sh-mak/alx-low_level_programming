#include "main.h"
/**
 * move_paste_star - iteratese past astorisk
 * @s2: the 2nd string
 * Return: the pointer past star
 */
char *move_paste_star(char *s2)
{
	if (*s2 == '*')
		return (move_paste_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - make it real
 * @s1: 1st string
 * @s2:2nd string
 * Return: 1 if identical, 0 if false
 */
int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
	{
		ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1 + 1, s2);
	}
	return (ret);
}

/**
 * wildcmp - compares two strings
 *  @s1: 1st string
 *  @s2:2nd string
 *  Return: 1 if identical, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_paste_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_paste_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		 ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
