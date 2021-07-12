#include <stdio.h>

/**
 * main - print program name.
 * @argc: argument(s) count.
 * @argv: passed string value.
 * Return: 0 -exit success.
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
