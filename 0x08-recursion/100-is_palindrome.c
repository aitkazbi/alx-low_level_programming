#include "main.h"
#include <string.h>

/**
  *strlen_recu- count the lentgh of a string
  *@string: variable the string
  *Return: the lenght
  *
  */
int strlen_recu(char *c)
{
if (c[0] != '\0')
return (1 + strlen_recu(c + 1));
return (0);
}

/**
  *Check_palindrome- check if a string is palindrome
  *@s: the variable the string
  *@i: variable
  *@j: Variable
  *Return: 1 if a string is a palindrome 0 if not
 */
char Check_palindrome(char *s, int i, int j)
{
if (s[i] == s[j])
if (i > j /2)
return (1);
else
return (Check_palindrome(s, i+1, j-1));
else
return (0);
}

/**
  *is_palindrome- Chekch if a string is a palindrome
  * @s: Variable the string
  *
  *
  *Return: 1 if a string is a palindrome 0 if not.
  */
int is_palindrome(char *s)
{
return (Check_palindrome(s, 0, strlen_recu(s)-1));
}

