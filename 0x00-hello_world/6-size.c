#include <stdio.h>
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
printf("Size of a int: %ld byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", (unsigned 
long)sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
