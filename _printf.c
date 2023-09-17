#include "main.h"

/**
 * print_s - prints string.
 * @s: char.
 * Return: numbers of characters.
 */

int print_s(char *s)
{
        int i = 0;

        while (s[i])
        {
                _putchar(s[i]);
                i++;
        }
        return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * len - length of num.
 * @num: int.
 * Return: len
 */

int len(int num)
{
	if (num == 0)
		return (0);
	return (1 + len(num / 10));
}
/**
 * print_di - prints numbers.
 * @num: int.
 * Return: the number of characters printed excluding the null byte.
 */

int print_di(int num)
{
	int c = 0;

	if (num == -2147483648)
	{
		_putchar('-');
		_putchar(2);
		print_di(147483648);
		return(1);
	}
	else if (num < 0)
	{
		_putchar('-');
		c++;
		num = -1 * num;
	}
	if (num >= 10)
	{
		print_di(num / 10);
		print_di(num % 10);
	}
	else if (num < 10)
	{
		_putchar(num + '0');

	}
	return (1);
}

/**
 * _printf - a function that produces output according to a format.
 * @format: char.
 * @...:
 * Return: the number of characters printed excluding the null byte.
 */

int _printf(const char *format, ...)
{
        char ch, *str;
        int i, c = 0;
	int num;
        va_list list;
        va_start(list, format);

        if (format != NULL || format[0] == '\0')
        {
                return (-1);
        }
        for (i = 0; format[i] != '\0'; i++)
        {
                if(format[i] == '%')
                {
                        i = i + 1;
                        if (format[i] == 'c')
                        {
                                ch = va_arg(list, int);
                                c += _putchar(ch);
                        }
                        else if (format[i] == 's')
                        {
                                str = va_arg(list, char *);
                                c += print_s(str);
                        }
			else if (format[i] == 'd' || format[i] == 'i')
			{
				num = va_arg(list, int);
				if (num < 0)
					c++;
				c += len(num);
				print_di(num);
			}
                        else if (format[i] == '%')
                        {
                                _putchar('%');
                                c++;
                        }
                        else
                        {
                                _putchar(*format);
                                c++;
                        } format++;
                }
		else 
		{
			_putchar(*format);
			format++;
			c++;
		}
        }
        return (c);
}
