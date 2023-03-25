#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - docs goes here
 *
 * Return: 0 Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 5)
printf("Last digit of %d is %d and is 0", n, abs(n % 10));
else if (n == 0)
printf("Last digit of %d is %d and is less than 6 and not 0", n, abs(n % 10));
if (n < 6 && n != 0)
printf("Last digit of %d is %d and is 0", n, abs(n % 10));
return (0);
}
