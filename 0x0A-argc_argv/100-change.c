#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *@argc: arguments
 *@argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int mony;
int j;
int count;
int coins[5] = {25, 10, 5, 2, 1};

count = 0;
mony = 0;

if (argc == 2)
{
for (j = 0; j <= 4; j++)
{
if (atoi(argv[1]) >= coins[j])
{
mony = atoi(argv[1]) / coins[j];
count = atoi(argv[1]) % coins[j];
break;
}
}

for (j = 0; j <= 4; j++)
{
if (count >= coins[j])
{
mony++;
count = count - coins[j];
j = 0;
}
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", mony);
return (0);
}


