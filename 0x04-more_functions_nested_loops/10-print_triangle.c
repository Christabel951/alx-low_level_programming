#include "holberton.h"
/**
 * print_triangle - prints a triangle using # character.
 *
 * @size: Accept 1 argument of type int.
 *
 * Return: void - has no return value.
 */
void print_triangle(int size)
{
int cn, i, j, k;
cn = size - 1;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1 ; j <= cn; j++)
{
_putchar(32);
}
cn--;
for (k = 1; k <= i; k++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
