#include <stdio.h>
#include "main.h"
/**
 * get_bit- Returns the value of a bit at a given index.
 * @index: The index
 * @n: The number
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
else
return ((n >> index) & 1);
}
