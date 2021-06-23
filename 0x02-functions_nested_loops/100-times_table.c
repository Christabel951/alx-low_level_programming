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

	if ((n > 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (p < 10)
				{
					_putchar(p + 48);
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				else if (p >= 10)
				{
					int fd, ld;
					fd = p / 10;
					ld = p % 10;
					_putchar(fd + 48);
					_putchar(ld + 48);
					_putchar(32);
					_putchar(32);
				}
				else if (p >= 100)
				{
					int f, s, l, hold;
					l = p % 10;
					hold = p / 10;
					s = hold % 10;
					f = hold / 10;
					_putchar(f + 48);
					_putchar(s + 48);
					_putchar(l + 48);
					_putchar(44);
					_putchar(32);
				}
			}
			putchar('\n');
		}
	}
}

