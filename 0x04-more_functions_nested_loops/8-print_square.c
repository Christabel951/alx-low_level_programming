#include "holberton.h"
/**
 * print_square - prints a square using # character.
 *
 * @size: Accept 1 argument of type int.
 *
 * Return: void - has no return value.
 */
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
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
