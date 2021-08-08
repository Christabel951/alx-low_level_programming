#include "main.h"
/**
 * _strlen - compute the length of a string
 * @s: pointer to a char
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}
/**
 * _pow_recursion - print result of value x raised to power y.
 * @x:value of number.
 * @y: power value.
 *
 * Return: integer value - result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: binary value in string
 *
 * Description: Transforms a binary number represented in string value
 * into an unsigned integer value
 * Return: unsigned integer value if success, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert, result = 0;
	int i, j, flag, len, base = 2;

	if (!b)
		return (0);
	len = _strlen(b);
	j = len - 1;
	for (i = 0; i < len; i++)
	{
		if(b[i] == '1')
			flag = 1;
		else if (b[i] == '0')
			flag = 0;
		else
			return (0);
		convert = (unsigned int)(flag * _pow_recursion(base, j));
		result += convert;
		j--;
	}
	return (result);
}
