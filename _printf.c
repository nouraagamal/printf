#include "main.h"

/**
 * _printf - print the sentence
 *
 * @format: constant charactère
 * @...: other variables
 *
 * Return: the output
 */

int _printf(const char *format, ...)
{
	int (*specifier)(va_list);
	int i, c = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				c += _putchar(format[i]);
				i = i + 2;
			}
			else
			{
				specifier = _spe(format[i + 1]);
				if (specifier)
					c += specifier(list);
				else
					c = _putchar(format[i]) + _putchar(format[i + 1]);
				i = i + 2;
			}
		}	
		else
		{
			c += _putchar(format[i]);
			i++;
		}
	}
		va_end(list);
		return (c);
}
