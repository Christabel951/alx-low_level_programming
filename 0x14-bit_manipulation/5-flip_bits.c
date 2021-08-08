#include "main.h"
/**
 * flip_bits - compute the number of bits to flip to move from num to num
 * @n: one of the 2 numbers
 * @m: other number
 *
 * Description: get the number of bits that require flipping to
 * jump from one given number to another
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count =0;
	unsigned long int _bit;

	for (i = 63; i >= 0; i--)
	{
		_bit = (n ^ m) >> i;
		if (_bit & 1)
			count++;
	}
	return (count);
}
