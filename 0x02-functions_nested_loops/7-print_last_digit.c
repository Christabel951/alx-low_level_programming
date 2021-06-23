#include "holberton.h"

/**
 * print_last_digit - compute the last digit of an integer argument.
 * Description: accepts one paramenter which it evaluates to last digit of a number.
 * @_ld: The parameter is of type int.
 * Return: value included in if statements
 */
int print_last_digit(int _ld)
{
_ld %= 10;
return (_ld);
}
