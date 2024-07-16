#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
/* Acá van los prototypes de las conversion functions */
int length(const char *str);
char *char_to_str(char c);
char *int_to_str(int num);
#endif /* MAIN_H */
