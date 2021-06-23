#include "holberton.h"

/**
 * times_table - prints 9x table.
 * Description: prints in [var, space] format
 * @void: Does not accept arguments.
 * Return: Has no return value -type void.
 */
void times_table(void)
{
int num_1, num_2 product;

for (num_1 = 0; num_1 <= 9; num_1++)
{
for (num_2 = 0; num_2 <=9; num_2++)
{
product = num_1 * num_2;
_putchar(product + 48);
_putchar(44);
_putchar(32);
}
_putchar('\n');
}
}
