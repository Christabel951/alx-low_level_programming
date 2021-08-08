#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 *
 * Description: Converts a number - n - of type %ul and prints
 * the binary result of the conversion using _putchar function
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int _bitcheck;

	i = 63;
	while (i >= 0)
	{
		_bitcheck = n >> i;
		if (_bitcheck & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
