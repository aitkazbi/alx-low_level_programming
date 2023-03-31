#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c as output
 * @c: The character to print
 *
 * Return: The value of C.
 */

int _putcha(char c)
{
return (write(&c));
}
