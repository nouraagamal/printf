#include "main.h"
/**
 *print_u - print unsigned int.
 *@fn: int.
 *Return: unsigned int.
 */

int print_u(va_list fn)
{
	int s = 1, end_u;
	int i, len = 0;
	unsigned int num;

	num = va_arg(fn, unsigned int);
	while (num / s > 9)
		s *= 10;
	for (i = s; i >= 1; i /= 10, len++)
	{
		end_u = (num / i) % 10;
		_putchar(end_u + '0');
	}
	return (len);
}

/**
 *print_o - print in oct
 *@fn: int.
 *Return: oct.
 */

int print_o(va_list fn)
{
	unsigned int n, ch;
	int j;
	int oct[1024];

	n = va_arg(fn, int);
	if (n == 0)
		return (_putchar('0'));
	for (ch = 0; n != 0; ch++)
	{
		oct[ch] = n % 8;
		n = n / 8;
	}
	for (j = ch - 1; j >= 0; j--)
		_putchar(oct[j] + '0');
	return (ch);
}

/**
 *print_x - print hexadecimal ( lowercase ).
 *@fn: int.
 *Return: hax ( lowercase ).
 */

int print_x(va_list fn)
{
	int i, j, c;
	unsigned int diff = 39, tmp, num;
	char hexa[9];

	num = va_arg(fn, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0, c = 0; num != 0; i++, c++)
	{
		tmp = num % 16;
		if (tmp >= 10)
		{
			hexa[i] = tmp + diff + 48;
		}
		else
		{
			hexa[i] = tmp + 48;
		}
		num /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(hexa[j]);
		j--;
	}
	return (c);
}

/**
 *print_X - print hexadecimal ( uppercase ).
 *@fn: int.
 *Return: hex ( uppercase ).
 */

int print_X(va_list fn)
{
	int i, j, c;
	unsigned int diff = 7, tmp, num;
	char hexa[9];

	num = va_arg(fn, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0, c = 0; num != 0; i++, c++)
	{
		tmp = num % 16;
		if (tmp >= 10)
		{
			hexa[i] = tmp + diff + 48;
		}
		else
		{
			hexa[i] = tmp + 48;
		}
		num /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(hexa[j]);
		j--;
	}
	return (c);
}
