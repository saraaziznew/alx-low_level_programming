#include "main.h"
/**
 * get_bit - gets th bit at the index
 * @n: string to print
 * @index: string to print
 * Return: 0 (success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
