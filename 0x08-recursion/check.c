#include "main.h"

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
