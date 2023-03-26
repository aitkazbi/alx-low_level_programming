#include <stdio.h>
/**
  * main- print the alphabet in lowercase
  *
  *
  * Return: Always 0.
  */
int main(void)
{
int n = 48;
while (n <= 57)
{
putchar(n + 48);
n++;
}
putchar(' ');
putchar(',');
putchar('\n');
return (0);
}
