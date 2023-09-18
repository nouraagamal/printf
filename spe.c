#include "main.h"

/**
 *_flag - extension of _printf
 *@j: j
 *Return: 0
 */

int (*_flag(char j))(va_list)
{
	int i = 0;
	spec arr[] = {

		{"d", int_print_d},
		{"i", int_print_i},
		{"c", int_print_c},
		{"s", int_print_s},
	};

	while (arr[i].valid)
	{
		if (j == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (0);
}
