#include <stdio.h>

/**
 * main - check the code for multiples of 3 and 5.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i, mul, _mod3, _mod5, sum;
    for (i = 1; i < 1024; i++)
    {
	    _mod3 = i % 3;
	    _mod5 = i % 5;
	    if ((_mod3 == 0) || (_mod5 == 0))
	    {
		    sum += i;
	    }
    }
    printf("%d\n", sum);
    return (0);
}
