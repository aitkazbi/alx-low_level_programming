#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  *
  * @n: the input number as integer.
  *
  * Return: Value of last digit
  */
int print_last_digit(int n)
{
int num = n % 10;
if (num < 0)
{
num *= -1;
}
else
{
_putchar(num + '0');
}
_putchar('\n');
return (num);
}
