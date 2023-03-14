#include <stdlib.h>
/**
 * alloc_grid- returns int pointer to two dimemtional array
 * @width: width of array
 * @height: height of array
 * Return: int pointer to two dimentional array or null on failliar
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, k;

	if (height < 1 || width < 1)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		if (p[i] == NULL)
		{
			free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			p[j][k] = 0;
		}
	}
	return (p);

}
