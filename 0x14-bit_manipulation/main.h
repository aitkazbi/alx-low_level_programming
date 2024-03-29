#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <unistd.h>
#define STDOUT 1

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void _putchar(char c);
int get_endianness(void);


#endif
