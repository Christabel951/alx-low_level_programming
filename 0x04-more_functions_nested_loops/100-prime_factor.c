#include <stdio.h>

/**
 * main - check and print the largest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 1231952;
	long i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
