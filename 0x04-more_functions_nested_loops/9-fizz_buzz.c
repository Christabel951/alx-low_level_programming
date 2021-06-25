#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, m3, m5;

for (i = 1; i <= 100; i++)
{
m3 = i % 3;
m5 = i % 5;
if (i == 1)
{
printf("%d", i);
}
else
{
printf(" ");
if (m3 == 0 && m5 == 0)
{
printf("FizzBuzz");
}	
else if (m5 == 0)
{
printf("Buzz");
}
else if (m3 == 0)
{
printf("Fizz");
}
else 
{
printf("%d", i);
}
}
}
printf("\n");
return (0);
}
