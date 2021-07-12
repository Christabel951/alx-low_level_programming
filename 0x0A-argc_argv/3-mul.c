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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
