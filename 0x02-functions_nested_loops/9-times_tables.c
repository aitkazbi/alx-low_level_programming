#include "main.h"
#include <stdio.h>

/**
 * times_table- prints the 9 times table
 * Return: No return
 */
void times_table(void)
{
int a, b, res;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
res = a * b;
if (b == 0)
{
_putchar(res + '0');
}
else if (res >= 10)
{
_putchar(' ');
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
if (b != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
