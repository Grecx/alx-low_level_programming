#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 * Return Success
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}

	_putchar('\n');
}
