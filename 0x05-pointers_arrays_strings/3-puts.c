#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to be printed.
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str)
	{	_putchar(*str + 0);
		str++;
	}

	_putchar('\n');
}
