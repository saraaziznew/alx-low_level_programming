#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array:string to print
 * @size: string to print
 * @cmp: string to print
 * Return: 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
