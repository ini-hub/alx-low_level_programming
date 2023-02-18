#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - A program to assign a random number to the variable n
 * Return: The code should return 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%f\n", n);
	return (0);
}
