#include "main.h"
#include <stdio.h>
#include <stddef.h>


/**
 * flip_bits- function that returns the number of bits you would need
 * *   to flip to get form one number to another.
 * @n: The number 1
 * @m: The number 2
 * Return: 1 if it worked, or -1 if an error occurred
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int xor = n ^ m;
while (xor)
{
count += xor & 1;
xor >>= 1;
}

return (count);
}
