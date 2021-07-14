#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int get_coin_change(int change);
/**
 * main - print min number of coins to make change for an amount of money.
 * [1, 2, 5, 10, 25]
 * @argc: argument(s) count.
 * @argv: passed argument value.
 * Return: 0 -exit success.
 */
int main(int argc, char *argv[])
{
	int change = 0;
	int changecombn = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		if (change < 0)
		{
			printf("0\n");
		}
		else
		{
			changecombn = get_coin_change(change);
			printf("%d\n", changecombn);
		}
		return (0);
	}
}
/**
 * get_coin_change - get least combination of change.
 * @change: balance.
 * Return: least combination of coint change in int type.
 */
int get_coin_change(int change)
{
	int i, count = 0;

	i = change;
	while (i >= 1)
	{
		if (i >= 25)
		{
			change = i / 25;
			i %= 25;
		}
		else if (i >= 10 && i < 25)
		{
			change = i / 10;
			i %= 10;
		}
		else if (i >= 5 && i < 10)
		{
			change = i / 5;
			i %= 5;
		}
		else if (i >= 2 && i < 5)
		{
			change = i / 2;
			i %= 2;
		}
		else
		{
			change = i / 1;
			i %= 1;
		}
		count += change;
	}
	return (count);
}
