#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: the int width of the array
 * @height: the int height of the array
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
int l, t, i, j;
int **a;
a = malloc(sizeof(int) * height);
if (a == NULL)
{
free(a);
}
else
{
for (i = 0; i < height; i++)
{
a[i] = malloc(sizeof(int) * width);
if (a[i] == NULL)
{
for (j = i; j >= 0; j++)
{
free(a[j]);
}
free(a);
return (NULL);
}
}
for (l = 0; l < height; l++)
{
for (t = 0; t < width; t++)
{
a[l][t] = 0;
}
}
}
return (a);
}
