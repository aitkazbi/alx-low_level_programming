#include <stdio.h>

/**
  * main -Prints the number of args
  * @argc: argument
  * @argv: argument
  *
  * Return: Always Zero
  */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
