#include <stdio.h>
/**
*main - find prime factor 
*
*Return: Always 0
*/

int main()
{
int i, j, Pri;
long int nom;

nom = 612852475143;

printf("The Prime Factors of %ld are: \n", nom);

for(i = 2; i <= nom; i++)
{
if(nom%i == 0)
{
Pri = 1;
for(j = 2; j <=i/ 2; j++)
{
if(i%j == 0)
{
Pri = 0;
break;
}
}

if(Pri == 1)
{
printf("%d, ", i);
}
}
}

return 0;
}

