#include <stdio.h>
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
	int i, j;
	if (nat > 0)
	{
		if (nat <= 98)
		{
			for (i = nat; i <= 98; i++)
			{
				if (i != 98)
				{
					printf("%d, ", i);
				}
				printf("%d", i);
			}
		}
		else
		{
			for(j = nat; j >= 98; j--)
			{
	              		if (j != 98)
				{
					printf("%d, ", j);
				}
				printf("%d", j);
			}
		}
		printf("\n");
	}
}
