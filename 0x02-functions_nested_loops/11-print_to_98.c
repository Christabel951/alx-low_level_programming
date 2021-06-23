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
	int i;
	if (nat > 98)
	{
	for (i = nat; i > 98; i--)
	{
		printf("%d, ", i);
	}
	}
	else if (nat < 98)
	{
		for (i = nat; i < 98; i++)
		{
		printf("%d, ", i);
		}
	}
	printf("%d\n", n);

}
