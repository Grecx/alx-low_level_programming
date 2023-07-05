#include "main.h"

/**
 * _strlen_recursion - main
 * @s: The string to be measured.
 *
 * Return: ln
 */
int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s)
	{
		ln++;
		ln += _strlen_recursion(s + 1);
	}

	return (ln);
}
