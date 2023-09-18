#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);
	return (x);
}
