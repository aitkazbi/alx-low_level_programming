#include "main.h"

/**
  * print_line- draws a straight line in the terminal.
  * @n: Variable the input
  *
  * Return: No return
  */
void print_line(int n)
{
int line;
line = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (line = 0; line < n; line++)
{
_putchar('_');
}
_putchar('\n');
}
}
