#include <ctype.h>
#include "main.h"
/**
 * islowe - function to check the lower case
 * Return: 0 (success)
 */
int _islower(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
