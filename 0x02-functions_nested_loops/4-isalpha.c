#include "holberton.h"

/**
 * _isalpha - check if argument passed is lowercase alphabets.
 * Description: accepts one paramenter which it evaluates.
 * The parameter c is of type int.
 * Return: no return value.
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
return (1);
}
else
{
return (0);
}
}
