#include "main.h"
/**
 * rev_string - entry point
 * @s: string to print
 * Return: 0 (success)
 */
void rev_string(char *s)
{
	int l, n;
	char temp;
	 
	for (l = 0; s[l] != '\0'; ++l)
		;
	for (n = 0; n < 1 / 2; n++)
	{
		temp = s[n];
		s[n] = s[l - 1 - n];
		s[l - 1 - n] = temp;
	}
}
