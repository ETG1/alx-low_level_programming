#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *d);
void print_binary(unsigned long int e);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *e, unsigned int index);
int get_endianness(void);
unsigned int flip_bits(unsigned long int a, unsigned long int b);

#endif

