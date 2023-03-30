#include "main.h"

/**
 * print_to_98- prints all natural numbers from n to 98
 *
 *@n: variable the input
 * Return: No return
 */
void print_to_98(int n)
{
int x = 98;
for (n = 0; n <= 98; n++)
{
_putchar(n);
_putchar(',');
_putchar('\n');
}
else
for (n = 98; n >= 98; n--)
{
_putchar(n);
_putchar(',');
_putchar('\n');
}
}
