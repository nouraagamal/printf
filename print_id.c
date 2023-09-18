#include "main.h"
/**
 *print_d - print int (base 10).
 *@fn: decimal to print
 *Return: int (base 10).
 */

int print_d(va_list fn)
{
	unsigned int abs, a, count1, count;
	int j;

	count = 0;
	j = va_arg(fn, int);
	if (j < 0)
	{
		abs = (j * -1);
		count += _putchar('-');
	}
	else
		abs = j;

	a = abs;
	count1 = 1;
	while (a > 9)
	{
		a /= 10;
		count1 *= 10;
	}
	while (count1 >= 1)
	{
		count += _putchar(((abs / count1) % 10) + '0');
		count1 /= 10;
	}
	return (count);
}

/**
 *print_i - print int.
 *@fn: int.
 *Return: int.
 */

int print_i(va_list fn)
{
	return (print_d(fn));
}
