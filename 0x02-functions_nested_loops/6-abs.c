#include "holberton.h"

/**
 * _abs - compute absolute value of interger.
 * Description: accepts one paramenter which it evaluates set conditions.
 * @n: The parameter is of type int.
 * Return: value included in if statements
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
}
