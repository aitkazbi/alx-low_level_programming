#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* *str_concat - Concatenates two strings
* @s1: Variable
* @s2: Variable
*
* Return: two concatenantes strings
*/
char *str_concat(char *s1, char *s2)
{
char *stnew = NULL;
unsigned int i;
int n1;
int n2;
int c;

c = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (n1 = 0; s1[n1] != '\0'; n1++)
;
for (n2 = 0; s2[n2] != '\0'; n2++)
;
stnew = (char *)malloc((n1 + n2 + 1) * sizeof(char));
if (stnew == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
stnew[i] = s1[i];
for (; s2[c] != '\0'; i++)
{
stnew[i] = s2[c];
c++;
}
return (stnew);
}

