#include "main.h"
/**
 * sum_them_all - entry point
 * @n: string to print
 * @...: the integer of sum
 * Return: 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int)
			va_end(ap);
	return (s);
}
