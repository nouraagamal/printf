#include "main.h"

/**
 * print_S - prints Non printable characters & hexadecimal.
 * @fn: string.
 * Return: int.
 */

int print_s(va_list fn)
{
	int i, c = 0;
	char st;
	va_list list;

	st = va_arg(fn, list);
	if (st == NULL)
	{
		return (-1);
	}
	for (i = 0; st[i] != NULL; i++)
	{
		if ((0 < st[i] < 32) || (st[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			c = c + 2;
			for (int j = 0; j < 2; j++)
			{
				_putchar(print_X(st[i]);
				c++;
			}
		}
		else
			_putchar(st[i]);
			c++;
	}
	return (c);
}
