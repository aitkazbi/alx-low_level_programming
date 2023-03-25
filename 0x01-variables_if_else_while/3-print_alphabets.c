#include <stdio.h>
/**
  * main- print the alphabet in lowercase
  *
  *
  * Return: Always 0.
  */
int main(void)
{
int n = 97;
int m = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (n <= 90)
{
putchar(m);
n++;
}
putchar('n');
return (0);
}
