#include "holberton.h"

/**
 * _islower - check if argument passed is lowercase alphabets.
 * Description: accepts one parameter of type int 
 * which is evaluated with set conditions for lowercase alphabets.
 * @c: one integer type parameter
 * Return: no return value.
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
