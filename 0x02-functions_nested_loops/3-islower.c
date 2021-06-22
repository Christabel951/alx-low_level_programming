#include "holberton.h"

/**
 * _islower - check if argument passed is lowercase alphabets.
 * Description: accepts one paramenter of type int which it evaluates
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
