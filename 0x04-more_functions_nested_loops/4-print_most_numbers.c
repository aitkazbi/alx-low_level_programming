#include "main.h"

/**
  * print_most_numbers- Print number from 0 to 9
  * except 2 and 4
  *
  * Return: No return
  */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 && i == 4)
{
break;
}
_putchar(i);
}
_putchar('\n');
}
