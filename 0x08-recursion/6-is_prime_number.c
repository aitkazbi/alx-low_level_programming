#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
  *is_prime_number- Check input is a prime number
  *@n: Variable the input
  *Return: 1 if the input is a prime number
  */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, n-1));
}

/**
  *check_prime - Check if number is prime
  *@n: Variable the number to check
  *@i: the iteration times
  *
  *Return: 1 for prime or 0 composite
  */
int check_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
else
return (check_prime(n, i - 1));
}
