#include "holberton.h"
/**
 * more_numbers - prints 0 - 14 using 3 _putchar.
 *
 * @void: Does not accept arguments.
 *
 * Return: void - has no return value.
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
