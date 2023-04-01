#include "main.h"
#include <string.h>

/**
 * print-rev - prints a string, in reverse 
 * @s: variable.
 */
void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
