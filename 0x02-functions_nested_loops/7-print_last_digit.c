#include "holberton.h"

/**
 * print_last_digit - compute the last digit of an integer argument.
 * Description: accepts one paramenter which it evaluates to last digit.
 * @_ld: The parameter is of type int.
 * Return: value included in if statements
 */
int print_last_digit(int _ld)
{
_ld %= 10;
if (_ld >= 0)
{
_putchar(_ld + '0');
return (_ld);
}
else 
{
_putchar(-_ld + '0');
return (-_ld);
}
}
