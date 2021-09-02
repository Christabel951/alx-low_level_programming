#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers starting with 1 and 2
 * and followed by a new line
 *
 * Return: 0 - Successful program execution
 */
int main(void)
{
	long int i, fib1 = 1, fib2 = 2, fib;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1 || i == 2)
		{
			printf("%d, ", i);
		}
		else
		{
			fib = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib;
			if (i == 50)
				printf("%d\n", fib2);
			else
				printf("%d, ", fib2);
		}
	}
	return (0);
}
