#include "holberton.h"

/**
 * add - adds two integers.
 *
 * Description:Accepts two arguments of type int
 * and returns the computed addition.
 *
 * @a:first number in parameter list.
 * @b:second number in parameter list.
 *
 * Return: Has a return value of type int.
 */
int add(int a, int b)
{
int sum = a + b;
if (sum >= 0)
{
return (sum);
}
else
{
return (-sum);
}
}
