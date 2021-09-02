#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 - Successful program execution
 */
int main()
{
	int arr[50];
	int fib, i, j = 0;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1 || i == 2)
		{
			arr[j] = i;
			printf("%d, ", arr[j]);
			j++;
		}
		else
		{
			fib = arr[j - 1] + arr[j - 2];
			arr[j] = fib;
			if (i == 50)
				printf("%d", arr[j]);
			else
				printf("%d, ", arr[j]);
			j++;
		}
	}
	printf("\n");
	return (0);
}
