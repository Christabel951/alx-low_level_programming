#include "holberton.h"

/**
 * string_toupper - check and transform lower case chars in string to upper.
 *
 * @str: array of type char, string.
 *
 * Return: string with uppercase chars.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
