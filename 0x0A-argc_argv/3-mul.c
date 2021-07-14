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
	int multp;

	if (argc == 3)
	{
		multp = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multp);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
