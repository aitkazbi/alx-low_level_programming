#include "main.h"
/**
 * print_square- Prints a square, followed by a new line.
 * @size: Variable the input
 *
 *Return: No Return
 */
void print_square(int size)
{
int i;
int j;
i = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
}
