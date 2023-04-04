#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  *@s: Variable
  *@accept: Variable
  *Return:Always0
  */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int n;
int val;
int ch;
ch = 0;
val = 0;
for (i = 0; s[i] != '\0'; i++)
{
ch = 0;
for (n = 0; accept[n] != '\0'; n++)
{
val++;
ch = 1;
}
}
return (n);
}
