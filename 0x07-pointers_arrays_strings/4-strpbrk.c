#include "main.h"
/**
**_strpbrk- Searches astring for any of set of bytes
*@s: Variable
*@accept: Variable
*Return:Always 0
*/
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}

s++;
}

return ('\0');
}
