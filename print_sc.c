#include "main.h"

int int_print_c(va_list f);
int int_print_s(va_list f);
int int_print_cs(char *s);

/**
 *int_print_c - print char
 *@f: char to print
 *Return: char
 */

int int_print_c(va_list f)
{
	_putchar(va_arg(f, int));
	return (1);
}

/**
 *int_print_s - print string
 *@f: string to print
 *Return: string
 */

int int_print_s(va_list f)
{
	int i;
	char *s;

	s = va_arg(f, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}
/**
 *int_print_cs - print
 *@s: s
 *Return: f
 */

int int_print_cs(char *s)
{
	int i = 0;

	if (s)
	{
		while (s)
		{
			_putchar(*s);
			s++;
			i++;
		}
	}
	return (i);
}
