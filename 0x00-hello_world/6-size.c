#include<stdio.h>
/**
 * main - A program that prints five lins with printf functions
 * Return: 0 (success)
 */
int main(void)
{
printf("size of a char: %s byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
