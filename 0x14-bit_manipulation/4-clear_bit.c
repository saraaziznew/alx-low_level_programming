#include "main.h"
/**
 * clear_bit - clear the value of bit
 * @n:string to print
 * @index: string to print
 * Return: 0 (success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
