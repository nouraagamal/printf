#include "main.h"

/**
 * _printf - print the sentence
 * @format: constant charactère
 * @...: other variables
 * Return: the output
 */

int _printf(const char *format, ...)
{
	int (*_fl)(va_list);
	int i = 0, count = 0;
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
					count += _putchar(format[i]);
					i = i + 2;
				}
				else
				{
					_fl = fl(format[i + 1]);
					if (_fl)
						count += _fl(fn);
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);
					i = i + 2;
				}
			}
			else
			{
				count += _putchar(format[i]), i++;
			}
		}
		va_end(fn);
		return (count);
	}
	else
		return (-1);
}
