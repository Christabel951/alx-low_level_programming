#include "holberton.h"

/**
 * _strlen_recursion - find length of string.
 *
 * @s: pointer to string.
 *
 * Return: length of string.
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * palindrome_recursive - checks if char == char.
 *
 * @s: string to be checked
 * @i: first index
 * @j: last index
 *
 * Return: 1 if equal, else 0
 **/
int palindrome_recursive(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (i == j - 1)
	{
		return (s[i] == s[j]);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (palindrome_recursive(s, i + 1, j - 1));
}
/**
 * is_palindrome - checks if string is a palindrome.
 *
 * @s: pointer to string.
 *
 * Return: 1 if string == palindrome  else 0
 **/
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
	{
		return (0);
	}
	return (palindrome_recursive(s, 0, len - 1));
}
