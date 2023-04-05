#include "main.h"
#include <stdio.h>

/**
  *check_prime - Check if number is prime
  *@n: Variable the number to check
  *@i: the iteration times
  *
  *Return: 1 for prime or 0 composite
  */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % 1 == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (check_prime(n, i + 1));
}
