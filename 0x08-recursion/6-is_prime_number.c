#include "holberton.h"

/**
 * sqrt_recursive - calculate square root recursively.
 *
 * @n: given number
 * @r: comparison int value.
 *
 * Return: 1 sqr root == false, else sqrroot
 **/
int sqrt_recursive(int n, int r)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n * n == r)
	{
		return (n);
	}
	return (sqrt_recursive(n - 1, r));
}
/**
 * _sqrt_recursion - calculate natural square root of number.
 *
 * @n: given number.
 *
 * Return: -1 or square root of n.
 **/
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (sqrt_recursive(n / 2, n));
}
/**
 * is_prime_number - checks if number is prime.
 *
 * @n: given number.
 *
 * Return: 1 if == prime else 0.
 **/
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
	{
		return (0);
	}
	if (_sqrt_recursion(n) == -1)
	{
		return (1);
	}
	return (_sqrt_recursion(n));
}
