#include "main.h"
#include <stdlib.h>

/**
  * *create_array- Create an arry of char
  * @size: Variable
  * @c: Variable
  *Return: a pointer
  */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
if (size == 0)
return (NULL);
else
ptr =  malloc(sizeof(char) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
