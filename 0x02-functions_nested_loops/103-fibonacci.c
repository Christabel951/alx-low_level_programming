#include <stdio.h>
/**
 * main - find and print the sum of even valued terms with values
 * <= 4 000 000 followed by a new line
 *
 * Return: 0 - Successful program execution
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib, sum = 2;

	while (fib2 <= 4000000)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		if ((fib2 % 2) == 0)
		{
			sum += fib2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
