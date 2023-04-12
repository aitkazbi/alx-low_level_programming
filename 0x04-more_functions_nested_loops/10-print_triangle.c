#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i;
int cnt;
cnt = 0;
if (size > 0)
{
while (cnt < size)
{
i = size;
while (i > cnt + 1)
{
i--;
_putchar(' ');
}
while (i > 0)
{
_putchar('#');
i--;
}
cnt++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
