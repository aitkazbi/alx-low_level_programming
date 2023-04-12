#include "main.h"
#include <stddef.h>

/**
 **_strstr-locates a substring.
 *@haystack: Variable
 *@needle: Variable
 *Return: Always a 0
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *un = haystack;
char *deux = needle;
while (*un == *deux && *deux != '\0')
{
un++;
deux++;
}
if (*deux == '\0')
return (haystack);
}
return (NULL);
}
