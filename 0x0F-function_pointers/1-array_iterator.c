#include "function_pointers.h"
/**
 * array_iterator - function to
 * @array :string to print
 * @size: string to print
 * @action:string to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
