#include "holberton.h"

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
	int i = 0;

	while (i != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
