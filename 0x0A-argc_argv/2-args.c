#include <stdio.h>

/**
  * main -Prints all the arguments it receives
  * @argc: argument
  * @argv: argument
  *
  * Return: Always Zero
  */
int main(int argc, char *argv[])
{
int i;
(void) argv;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
