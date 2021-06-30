#include "holberton.h"

/**
 * _strncat - append n bytes from string to the end of another.
 *
 * @dest: string joined to.
 * @src: string joining to.
 * @n: integer limit for bytes to append
 *
 * Return: one string of two.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;
	int ls = 0;

	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		ls++;
		if (ls <= n)
		{
			dest[l] = src[i];
		}
		l++;
		i++;
	}
	if (ls >= n)
	{
		return (dest);
	}
	else
	{
		dest[l] = '\0';
		return (dest);
	}
}
