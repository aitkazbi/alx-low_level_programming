#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts_half -prints half of a string.
* @str: Variable
*
*/
void puts_half(char *str)
{
int indx = 0, len = 0, n;

while (str[indx++])
len++;

if ((len % 2) == 0)
n = len / 2;

else
n = (len + 1) / 2;

for (indx = n; indx < len; indx++)
_putchar(str[indx]);

_putchar('\n');
}
