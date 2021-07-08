#include "holberton.h"

/**
 * factorial - print factorial of a given number.
 *
 * @n:given number.
 *
 * Return: an integer value.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
