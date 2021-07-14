#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isnum(char *str);
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
			r = isnum(argv[i]);
			if (r == 1)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
/**
 * isnum - check if char is number.
 * @str: string to be checked
 * Return: 1, if not a number, else 0.
 **/
int isnum(char *str)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(str);
	while (i < len)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (num);
}
