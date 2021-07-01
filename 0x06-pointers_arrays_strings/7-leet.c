#include "holberton.h"

/**
 * leet - encode string into leet - 1337.
 *
 * @str: array of type char
 *
 * Return: string in 1337.
 */
char *leet(char *str)
{
	int i = 0;
	int k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (str[i] != '\0')
	{
		k = 0;
		while (k < 10)
		{
			if (str[i] == s1[k])
			{
				str[i] = s2[k];
			}
			k++;
		}
		i++;
	}
	return (str);
}
