#include "main.h"
/**
 * *string_toupper - entry point
 * @str: string to print
 * Return: 0 (success)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = srt[i] - 32;
		}
	}
	return (str);
}
