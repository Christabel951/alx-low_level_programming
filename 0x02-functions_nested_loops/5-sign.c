#include "holberton.h"

/**
 * print_sign - check if argument passed is +, 0 or -.
 * Description: accepts one paramenter which it evaluates set conditions.
 * @n: The parameter is of type int.
 * Return: value included in if statements
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
