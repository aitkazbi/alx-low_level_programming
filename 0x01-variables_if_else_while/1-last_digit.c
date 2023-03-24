#include <stdlib.h>
#include <time.h>
/* more headers goes there
 * a random number to the variable n each time it is executed
 * Returne Always 
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if( n > 5 )
{
printf("Last digit of is %d and is greater than 5", n);
if else( n == 0)
{
printf("Last digit of is %d and is 0", n);
}
}
if( n < 6 && n != 0 )
{
printf("Last digit of is %d and is less than 6 and not 0", n);
}

return (0);
}
