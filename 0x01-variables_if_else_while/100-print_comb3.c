#include <stdio.h>
/**
  * main- prints all possible combinations of single-digit numbers.
  *
  *
  * Return: Always 0.
  */
int main(void)
{
int n;
int m;
for (n = 0; n <= 89; n++)
{
if (n <= 9)
{
putchar(n + '0');
}
else
{
putchar(n);
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
