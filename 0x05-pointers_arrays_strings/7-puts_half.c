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
int i = 0;
int lent;
lent = _strlen(&str[i]);
for (i = 0; i >= lent; i++)
{
printf("%s\n", str);
}
}
