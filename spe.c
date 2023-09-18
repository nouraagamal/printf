#include "main.h"

/**
 *fl - to check the specifier.
 *@j: j
 *Return: 0
 */

int (*fl(char j))(va_list)
{
	int i = 0;
	sp arr[] = {

		{"d", print_d},
		{"i", print_i},
		{"c", print_c},
		{"s", print_s},
		{"b", print_b},
	};

	while (arr[i].x)
	{
		if (j == arr[i].x[0])
			return (arr[i].fn);
		i++;
	}
	return (0);
}
