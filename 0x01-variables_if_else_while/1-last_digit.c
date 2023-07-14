#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - An entry 
  * Return: 0 (success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n);
	}
	else if (n % 10 < 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	return (0);
}
