#include "holberton.h"

/**
 * sqrt_recursive - calculate square root recursively.
 *
 * @start: inital number
 * @end: last number within the limit of number
 * @t: given number
 *
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqrt_recursive(int start, int end, int t)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == t)
		{
			return (mid);
		}
		if (mid * mid > t)
		{
			return (sqrt_recursive(start, mid - 1, t));
		}
		if (mid * mid < t)
		{
			return (sqrt_recursive(mid + 1, end, t));
		}
	}
	return (-1);
}

/**
 * _sqrt_recursion - finds the natural square root of a number.
 *
 * @n: given number.
 *
 * Return: square root of n or -1.
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_recursive(2, n, n));
}
