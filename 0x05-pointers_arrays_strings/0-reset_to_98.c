#include "main.h"
#include <stdio.h>
/**
  *reset_to_98 -takes a pointer to an int as parameter
  *
  *Return: 0
  *
  */
void reset_to_98(int *n)
{
int p = 98;
*n = p;
printf("n=%d\n", p);
}
