#include "main.h"
#include <stdio.h>

/*
   * int _islower- to  checks for lowercase character
   *
   * Return 1 if lowercase
   * Returne 0 if lowercase
   */
int int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
