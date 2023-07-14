#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/*
 * main - Aprogram that print if the number is positive or negative or zero with lines of code
 * Return: 0 (success)
 * */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
/* your code goes there */
return (0);
}
