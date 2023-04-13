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
int resultat;
(void)argv;
if (argc == 3)
{
resultat = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", resultat);
}
else
{
printf("Error\n");
}
return (0);
}
