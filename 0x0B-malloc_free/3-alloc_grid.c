#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2
 * dimensional array of integers
 * @height: height input
 * @width: width input
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int x, z;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
		return (NULL);
	for  (x = 0; x < height; x++)
	{
		m[x] = malloc(sizeof(int) * width);
		if (m[x] == NULL)
		{
			for (; x >= 0; x--)
				free(m[x]);
			free(m);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
			m[x][z];
	}
	return (m);
}
