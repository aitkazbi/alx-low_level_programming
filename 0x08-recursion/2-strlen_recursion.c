#include "main.h"
/**
  * _strlen_recursion - returns the lenght of a string
  * @s: Variable
  * Return: Always the lenght of a string
 */
int _strlen_recursion(char *s)
{
{
int i = 0;

if (*s)
{
i++;
i += _strlen_recursion(s + 1);

}
return (i);
}

}
