#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* **alloc_grid -a pointer to a 2 dimensional array of integers.
* @width: Variable
* @height: Variable
*
* Return: width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
int **mat;
int i;
int j;
int l;
int *p;

if (width <= 0 || height <= 0)
return (NULL);
mat = (int **)malloc(height * sizeof(int *));
if (mat == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
*(mat + i) = (int *)malloc(width * sizeof(int));
if (*(mat + i) == NULL)
{
for (i = 0; i < height; i++)
{
p = mat[i];
free(p);
}
free(mat);
return (NULL);
}
}
for (l = 0; l < height; l++)
{
for (j = 0; j < width; j++)
{
mat[l][j] = 0;
}
}
return (mat);
}

