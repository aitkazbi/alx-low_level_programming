#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: variable.
 */
void print_rev(char *s)
{
int i;
int j;
for (i = 0; s[i] != '\0'; i--)
{
continue;
}
i--;
for (j = 0; j <= i; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
