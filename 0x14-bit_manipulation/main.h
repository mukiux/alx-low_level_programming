#ifndef BITS_H
#define BITS_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *k);
void print_binary(unsigned long int s);
int get_bit(unsigned long int f, unsigned int inde);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
