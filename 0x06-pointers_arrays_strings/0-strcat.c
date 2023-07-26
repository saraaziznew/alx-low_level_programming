#include "main.h"
#include <string.h>
/**
 * *_strcat - entry point
 * @dest: string to print
 * @src: string to print
 * Return: 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	char *dest[100], *src[100];

	strcpy(*dest, "SARA you");
	strcpy(*src, "are beautiful");
	_putchar(*dest);
}
