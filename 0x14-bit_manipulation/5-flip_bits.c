#include "main.h"
/**
 * flip_bit - clears the bit at the index
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bit(unsigned long int n, unsigned long int m)
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

