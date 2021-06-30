#include "holberton.h"

/**
 * _strcat - append string to the end of another.
 *
 * @dest: string joined to.
 * @src: string joining to.
 *
 * Return: one string of two.
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
