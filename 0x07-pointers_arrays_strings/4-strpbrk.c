#include "main.h"

/**
 * _strpbrk - main
 * @s: for the char
 * @accept: paramter for accept
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
				y = 1;
		}
		z = 0;
		if (y == 1)
			return (s + x);
		x++;
	}
	return (0);
}
