#include "main.h"
#include <string.h>

/**
**_strcpy - copies the string pointed
* @src: Variable
* @dest: variable
*
* Return: la valeur de dest
*/
char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
