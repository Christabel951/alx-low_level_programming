#include "holberton.h"
/**
 * _isdigit - checks for uppercase characters.
 *
 * @c: accept 1 parameter of type int.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (c == i)
return (1);
}
return (0);
}
