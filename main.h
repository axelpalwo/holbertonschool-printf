#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
/* Acá van los prototypes de las conversion functions */
int length(char *str);
char *int_to_str(int num);
char *int_to_base(unsigned int num, int base);
char *int_to_unsigned(unsigned int num);
#endif /* MAIN_H */
