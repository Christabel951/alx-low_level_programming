#include "holberton.h"

/**
 * _pow_recursion - print result of value x raised to power y.
 *
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
