#include "main.h"

/**
 * print_b - converts unsigned int to binary.
 * @fn: int.
 * Return: int.
 */

int print_b(va_list fn)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int c;

	n = va_arg(fn, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, c = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			c++;
		}
	}
	return (c);
}
