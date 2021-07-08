#include "holberton.h"

/**
 * _strlen_recursion - print length of string.
 *
 * @s: string whose length is evaluated.
 *
 * Return: an integer value.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
