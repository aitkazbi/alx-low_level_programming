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
while (n <= 122)
{
printf("%s%s$\n", n, putchar(n));
n++;
}
return (0);
}
