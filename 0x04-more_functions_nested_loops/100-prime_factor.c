#include <stdio.h>
/**
*main - find prime factor 
*
*/

int main()
{
long n = 1231952;
long i;

for (i = 2; i <= n; i++) {
while (n % i == 0) {
n /= i;
}
}

printf("%ld\n", i-1);
return 0;
}
