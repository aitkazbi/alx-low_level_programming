#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_rev - prints a string, in reverse
* @s: variable.
*/
void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
printf("\n");
}
