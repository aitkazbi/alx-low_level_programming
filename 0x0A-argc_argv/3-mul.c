#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main -multiplies two numbers
  * @argc: argument
  * @argv: argument
  *
  * Return: Always Zero
  */
int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
(void) argv;
if (argc != 3)
{
printf("Error");
return (1);
}
if (num1 == 0 || num2 == 0)
{
printf("Error");
return (1);
}
else
printf("%d\n", (num1 * num2));
return (0);
}
