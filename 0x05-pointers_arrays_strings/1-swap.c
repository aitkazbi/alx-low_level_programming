#include <stdio.h>
/**
  *swap_int- that swaps the values of two integers.
  *@a: The pointer
  *@b: The pointer
  */
void swap_int(int *a, int *b)
{
int x;
x = *b;
*b = *a;
*a = x;
}
