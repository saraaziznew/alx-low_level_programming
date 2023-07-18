#include "main.h"
/**
 * main - entry point
 * _putchar - to print the alphabet in lowercase
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122 ; c++)
	       _putchar(c);
	_putchar('\n');
}
