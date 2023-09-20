#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *struct specifier - struct
 *@x: char
 *@fn: fun.
 */

typedef struct specifier
{
	char *x;
	int (*fn)(va_list);
} sp;
int _printf(const char *format, ...);
int _putchar(char c);
int (*fl(char j))(va_list);
int print_d(va_list fn);
int print_i(va_list fn);
int print_c(va_list fn);
int print_cs(char *str);
int print_s(va_list fn);
int print_b(va_list fn);
int print_u(va_list fn);
int print_o(va_list fn);
int print_x(va_list fn);
int print_X(va_list fn);
int print_S(va_list fn);


#endif
