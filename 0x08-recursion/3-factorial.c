#include "main.h"
/**
 * factorial - Calculate the factorial of a given number
 * @n: variable
 * Return: the value of factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));

}
