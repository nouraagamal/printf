#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: char.
 * @...: other variables.
 * Return: int.
 */

int _printf(const char *format, ...)
{
	int (*_fl)(va_list);
	int i = 0, c = 0;
	va_list fn;

	if (format != NULL)
	{
		va_start(fn, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		while (format[i] != '\0' && format != NULL)
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
					_fl = fl(format[i + 1]);
					if (_fl)
						c += _fl(fn);
					else
						c = _putchar(format[i]) + _putchar(format[i + 1]);
					i = i + 2;
				}
			}
			else
			{
				c += _putchar(format[i]), i++;
			}
		}
		va_end(fn);
		return (c);
	}
	else
		return (-1);
}
