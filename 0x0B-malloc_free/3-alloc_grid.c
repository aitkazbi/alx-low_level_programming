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
int i, j, k, l;
int **n;

if (width <= 0 || height <= 0)
return (NULL);

n = malloc(sizeof(int *) * height);

if (n == NULL)
{
for (i = height - 1; i >= 0; i--)
{
free(n[i]);
}
free(n);
return (NULL);
}

for (i = 0; i < height; i++)
{
n[i] = malloc(sizeof(int) * width);
if (n[i] == NULL)
{
for (j = i - 1; j >= 0; j--)
{
free(n[j]);
}
free(n);
return (NULL);
}
}

for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
n[k][l] = 0;
}
}

return (n);
}
