#include "holberton.h"

/**
 * print_to_98 - adds two integers.
 *
 * Description:Accepts two arguments of type int
 * and returns the computed addition.
 *
 * @nat:first number in parameter list.
 *
 * Return: Has a return value of type int.
 */
void print_to_98(int nat)
{
	if ((nat !<= 0) || (nat < 1000))
	{
		if (nat <= 98)
		{
			int i;
			for (i = nat; i <= 98; i++)
			{	
				if (nat < 10)
				{
					_putchar(nat + 48);
					_putchar(44);
					_putchar(32);
				}
				if (nat >= 10)
				{
					int nat_fd, nat_ld;
					nat_fd = nat / 10;
					nat_ld = nat % 10;
					_putchar(nat_fd + 48);
					_putchar(nat_ld + 48);
					if (nat != 98)
					{
						_putchar(44);
						_putchar(32);
					}
				}	
			}	
		}

		if(nat > 98)
		{
			int j;
			for (j = nat; j	> 98; j--)
			{
				if (j < 100)
				{
					int nat_fd, nat_ld;
					nat_fd = nat / 10;
					nat_ld = nat % 10;
					_putchar(nat_fd + 48);
					_putchar(nat_ld + 48);
				}
				if (j >= 100)
				{
					int nat_fd, nat_temp, nat_sd, nat_ld;
					nat_ld = j % 10;
					nat_temp = j / 10;
					nat_sd = nat_temp % 10;
					nat_fd = nat_temp / 10;
					_putchar(nat_fd + 48);
					_putchar(nat_sd + 48);
					_putchar(nat_ld + 48);
					_putchar(44);
					_putchar(32);
				}
			}	
		}	
	}	
}
