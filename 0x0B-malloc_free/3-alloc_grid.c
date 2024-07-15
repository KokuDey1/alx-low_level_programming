#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to the 2-dimensional array of integers initialized to 0,
 * or NULL on failure or if width/height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *) malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			free(arr);
			for (b = 0; b <= a; b++)
				free(arr[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}
