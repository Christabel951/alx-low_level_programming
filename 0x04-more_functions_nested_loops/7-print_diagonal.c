#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line using \ character.
 *
 * @n: Accept 1 argument of type int.
 *
 * Return: void - has no return value.
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (i == j)
{
_putchar(92);
_putchar('\n');
}
else
{
_putchar(32);
}
}
}
}
else
{
_putchar('\n');
}
}
