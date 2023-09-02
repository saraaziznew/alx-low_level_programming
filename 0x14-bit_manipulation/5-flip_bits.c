#include "main.h"
/**
 * flip_bits - function return the number of bits
 * @n: string to print
 * @m: string to print
 * Return: 0 (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
