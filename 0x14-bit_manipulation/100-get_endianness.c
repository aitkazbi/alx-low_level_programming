#include <stdio.h>
#include "main.h"

/**
 * get_endianness- Checks the endiannes
 *
 * Return: 0 if big endizn, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int e;
	char *c;

	e = 1;
	c = (char *) &e;

	return ((int)*c);
}
