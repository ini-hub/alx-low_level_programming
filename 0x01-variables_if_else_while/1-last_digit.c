#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - A program will assign a random number to the variable
 * Return: 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else if (n > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
