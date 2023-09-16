#include "main.h"

/**
 * _spe - to know the specifier
 *
 * @j: character
 *
 * Return: 0
*/

int (*_spe(char j))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"s", print_s},
		{"c", print_c}
	};
	while (arr[i].k)
	{
		if (j == arr[i].k[0])
			return (arr[i].fn);
		i++;
	}
	return (0);
}
