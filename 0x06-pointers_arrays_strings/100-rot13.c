#include "holberton.h"

/**
 * rot13 - encode string to rot13.
 *
 * @str: array of type char
 *
 * Return: rot13-encoded string.
 */
char *rot13(char *str)
{
	int i = 0;
	int k;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	while (str[i] != '\0')
	{
		k = 0;
		while (k < 52)
		{
			if (str[i] == s1[k])
			{
				str[i] = s2[k];
				break;
			}
			k++;
		}
		i++;
	}
	return (str);
}
