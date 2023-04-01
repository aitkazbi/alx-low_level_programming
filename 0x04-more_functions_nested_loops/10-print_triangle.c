#include "main.h"
/**
 * print_triangle - check the code for Holberton School students.
 *@size: variable
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
}
