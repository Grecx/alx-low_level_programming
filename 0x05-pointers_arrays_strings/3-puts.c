#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to be printed.
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str + 48);
		str++;
	}

	_putchar('\n');
}
