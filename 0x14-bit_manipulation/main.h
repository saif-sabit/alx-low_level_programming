#ifndef MAIN_HEADER
#define MAIN_HEADER
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int power(int base, int exponent);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
