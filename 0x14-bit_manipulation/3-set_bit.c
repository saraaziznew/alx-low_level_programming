#include "main.h"
/**
 * set_bit - sets the bit at the index
 * @n: string to print
 * @index: string to print
 * Return: 0 (successs)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1l << index));
}
