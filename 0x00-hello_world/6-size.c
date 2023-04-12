#include <stdio.h>
<<<<<<< HEAD

=======
>>>>>>> 7dbf4c26691d841295390546596ae95b1c160091
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of a int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
=======
printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", (unsigned
long)sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
>>>>>>> 7dbf4c26691d841295390546596ae95b1c160091
return (0);
}
