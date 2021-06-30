#include "holberton.h"

/**
 * _strncpy - copy string to another.
 *
 * @dest: string copied to.
 * @src: string copied from.
 * @n: integer limit of bytes of string to be copied.
 *
 * Return: string/ array of type char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	if (i >= n)
	{
		return (dest);
	}
	else
	{
	dest[i] = '\0';
	return (dest);
	}
}
