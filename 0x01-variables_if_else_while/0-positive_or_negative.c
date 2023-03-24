#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
* main-printsarandomnumberandcheckifitspositve
* negative,orzero
*
*Return:0 Always
*/
int main(void)
{
int n;

srand(time(0));
n=rand()-RAND_MAX/2;

if(n<0)
printf("%disnegative\n",n);
else if(n>0)
printf("%dispositive\n",n);
else
printf("%diszero\n",n);
return(0);
}
