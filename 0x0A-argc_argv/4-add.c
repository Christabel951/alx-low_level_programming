#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - print sum of passed numbers.
 * @argc: argument(s) count.
 * @argv: passed argument value.
 * Return: 0 -exit success.
 */
int main(int argc, char *argv[])
{
	int i, r, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				r = atoi(argv[i]);
				if (r >= 0)
				{
					sum += r;
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
