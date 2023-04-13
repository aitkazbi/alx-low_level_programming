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
int num1 = 0;
int num2 = 0;
(void) argv;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", (num1 * num2));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
