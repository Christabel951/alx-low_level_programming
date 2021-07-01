#include "holberton.h"

/**
 * cap_string - check and transform lower case first char
 * of word in string to upper.
 *
 * @str: array of type char, string.
 *
 * Return: string with uppercase chars.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?'
				|| str[i] == '"' || str[i] == '('
				|| str[i] == ')' || str[i] == '{'
				|| str[i] == '}' || str[i] == ' '
				|| str[i] == '\n' || str[i] == '\t')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
