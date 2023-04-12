#include "main.h"
/**
  *print_chessboard - Prints the chessboard
  *@a: Variable
  *
  *Return: Always 0
  */
void print_chessboard(char (*a)[8])
{
int i;
int n;
for (i = 0; i < 8; i++)
{
for (n = 0; n < 8; n++)
_putchar(a[i][n]);

_putchar('\n');
}
}
