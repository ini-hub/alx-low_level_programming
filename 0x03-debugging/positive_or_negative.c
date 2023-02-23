#include "main.h"

/**
 * positive_or_negative - checks if integer is positive or negative
 * Return: 0
 * @i: Function parameter
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);
}
