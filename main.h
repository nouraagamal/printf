#ifndef MAIN_H_
#define MAIN_H_
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*_spe(char j))(va_list);
int print_s(va_list fn);
int print_c(va_list fn);

/**
 *struct specifier - struct
 *
 *@k: char
 *
 *@fn: fn
 */

typedef struct specifier
{
	char *k;
	int (*fn)(va_list);
}spec;

/**
 * print_s - prints string
 *
 * @fn: string to be printed
 *
 * Return: string
*/

int print_s(va_list fn)
{
	int i;
	char *s;

	s = va_arg(fn, char *);
	for (i = 0; s && s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * print_c - prints character
 *
 * @fn: charcarcter to be printed
 *
 * Return: character
*/

int print_c(va_list fn)
{
	_putchar(va_arg(fn, int));
	return (1);
}

#endif
