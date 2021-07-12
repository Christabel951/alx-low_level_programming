#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - print program name.
 * @argc: argument(s) count.
 * @argv: passed string value.
 * Return: 0 -exit success.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if ( *argv[i] >= '1' && *argv[i] <= '9')
			{
				sum+= atoi(argv[i]);
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
	else
	{
		printf("0\n");
		return (0);
	}
}
