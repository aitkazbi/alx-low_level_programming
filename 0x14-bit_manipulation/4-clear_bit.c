#include "main.h"
#include <stdio.h>
#include <stddef.h>


/**
 * clear_bit- function that sets the value of a bit to 1 at a given index.
 * @n: The number
 * @index: The index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
else
{
*n &= ~(1ul << index);
}
return (1);
}
