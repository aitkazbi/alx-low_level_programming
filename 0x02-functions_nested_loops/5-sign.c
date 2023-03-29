#include "main.h"

/*
 * print_sign - prints the sign of a number
 * @n: the number to cheks
 * Return: 1 and prints + if n  is greater than sero
 * Return: 0 and prints 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 *
 */
int print_sign(int n){

if(n > 0)
{
return (1);
_putchar('+');
}
else if(n = 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('\-');
}
}
