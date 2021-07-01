#include "holberton.h"

/**
 * reverse_array - invert original order of array elements.
 *
 * @a: array type int.
 * @n: number of elements of array.
 *
 * Return: no return value.
 */
void reverse_array(int *a, int n)
{
	int e = n - 1;
	int s, t;

	for (s = 0; s < n / 2; s++)
	{
		t = a[s];
		a[s] = a[e];
		a[e] = t;
		e--;
	}
}
