#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: input
 *
 *Return: The converted number, or 0if
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int resu = 0;
if (b == NULL)
{
return (0);
}
while (*b != '\0')
{
if (*b == '0')
{
resu = resu * 2;
}
else if (*b == '1')
{
resu = resu * 2 + 1;
}
else
{
return (0);
}
b++;
}
return (resu);
}
