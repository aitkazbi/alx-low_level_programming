#include "main.h"

/**
  * print_diagonal- draws a diagonal line on the terminal.
  * @n: Variable the input
  *
  * Return: No return
  */
void print_diagonal(int n)
{
int line, i;
line = 0;
if (n > 0)
{
while (line < n)
{
line++;
i = line;
while (i > 1)
{
_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
}
}
else if (n <= 0)
{
_putchar('\n');
}
}
