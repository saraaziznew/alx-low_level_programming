#include "main.h"
/**
 * swap_int - entry point
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
