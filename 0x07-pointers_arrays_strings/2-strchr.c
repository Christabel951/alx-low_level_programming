#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locate character in string.
 *
 * @s: string.
 * @c: type char.
 *
 * Return: pointer to type char.
 */
char *_strchr(char *s, char c)
{
	int i;
	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (0);
		}
	}
}
