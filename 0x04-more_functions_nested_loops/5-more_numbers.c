#include "main.h"

/**
  * more_numbers- prints 10 times the numbers, from 0 to 14
  *  followed by a new line.
  *
  * Return: No return
  */
void more_numbers(void)
{
int i;
int j;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
if (i <= 9)
{
_putchar(i + '0');
}
else
{
_putchar(i / 10 + '0'); /* affiche le chiffre de dizaines */
_putchar(i % 10 + '0'); /* affiche le chiffre de unités */
}
}
_putchar('\n');
}
}
