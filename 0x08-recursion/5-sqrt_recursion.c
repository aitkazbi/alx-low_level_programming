#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - returns the natural square root of a number
* @n:Variable integer to find sqrt of
* Return: natural square  or -1
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (check(1, n));
}
/**
* check - checks for the square root
* @x:Variable int
* @y:Varaible int
*
* Return: int
*/
int check(int x, int y)
{
if (x * x == y)
return (x);
if (x * x > y)
return (-1);
return (check(x + 1, y));
}
