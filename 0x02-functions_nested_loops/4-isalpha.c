#include "main.h"

/**
*_isalpha - checks for alphabetic character
*
* @c: The character in ASCII code to check.
* Return: 1 if c is an alphabetic letter, zero otherwise.
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

