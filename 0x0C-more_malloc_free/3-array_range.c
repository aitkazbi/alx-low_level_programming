#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range- creates an array of integers
* @min: the addresse of memory to print
* @max: the size of the memory to print
*
* Return: Nothing.
*/
int *array_range(int min, int max)
{
int i, t, count;
int *array = NULL;
count = 0;
if (min > max)
return (NULL);
t = (max - min) + 1;
array = malloc(t * (sizeof(int)));
if (array != NULL)
{
for (i = min; i <= max; i++)
{
array[count] = i;
count++;
}
return (array);
}
return (NULL);
}
