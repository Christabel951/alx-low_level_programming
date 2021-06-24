#include "holberton.h"
/**
 * print_line - prints a line using _ character.
 *
 * @n: Accept 1 argument of type int.
 *
 * Return: void - has no return value.
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i <= n; i++)
{
_putchar(95);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
