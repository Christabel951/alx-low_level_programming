#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);

/**
 * _strlen -  returns a pointer to a newly allocated space in memory
 * which contains the string value of concatenation of s2 upon s1.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to array of char.
 */
char *str_concat(char *s1, char *s2)
{
	int lens1, lens2;
	int i, k;
	char *arr;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	else if (s2 == NULL)
	{
		s2 = '\0';
	}
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	arr = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < lens1; i++)
		{
			arr[i] = s1[i];
		}
		k = 0;
		while ( k < lens2)
		{
			arr[i] = s2[k];
			i++;
			k++;
		}
		arr[i] = '\0';
		return (arr);
	}
}
/**
 * _strlen - compute string length.
 *
 * @s: pointer to a string.
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}
