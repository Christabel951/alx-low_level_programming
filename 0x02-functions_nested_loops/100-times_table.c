#include "holberton.h"

/**
 * print_times_table - prints a multiplication table.
 *
 * Description:Accepts one argument of type int
 * and returns the computed table of that argument.
 *
 * @n:parameter to set the multiplication table limit.
 *
 * Return: Has a return value of type int.
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
	_putchar(48);
	for (j = 1; j <= n; j++)
	{
		p = i * j;
		_putchar(44);
		_putchar(32);
		if (p <= 9)
		{
		_putchar(32);
		_putchar(32);
		_putchar(p + 48);
		}
		else if (p <= 99)
		{
		_putchar(32);
		_putchar((p / 10) + 48);
		_putchar((p % 10) + 48);
		}
		else
		{
		_putchar(((p / 100) % 10) + 48);
		_putchar(((p / 10) % 10) + 48);
		_putchar((p % 10) + 48);
		}
	}
	_putchar('\n');
	}
	}

}

