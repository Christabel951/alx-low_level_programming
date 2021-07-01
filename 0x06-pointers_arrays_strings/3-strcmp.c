#include "holberton.h"

/**
 * _strcmp - compare two strings.
 *
 * @s1: type pointer to char array.
 * @s2: type pointer to char array.
 *
 * Return: 0 or number<0 or number>0.
 */
int _strcmp(char *s1, char *s2)
{
	int l = 0;
	int d = 0;
	int i = 0;
	int e = 0;

	while (s1[l] != '\0')
		l++;
	while (s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			e++;
		}
		else
		{
			d = s1[i] - s2[i];
			return (d);
		}
		i++;
	}
	if (l == e)
	{
		i--;
		d = s1[i] - s2[i];
		return (d);
	}
	else
	{
		d = s1[i] - 0;
		return (d);
	}
}
