#include "main.h"

/**
 *print_c - print char
 *@fn: char.
 *Return: char.
 */

int print_c(va_list fn)
{
	_putchar(va_arg(fn, int));
	return (1);
}

/**
 *print_s - print string
 *@fn: string.
 *Return: str.
 */

int print_s(va_list fn)
{
	int i;
	char *s;

	s = va_arg(fn, char *);

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
 *print_cs - print
 *@s: s.
 *Return: int.
 */

int print_cs(char *s)
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
