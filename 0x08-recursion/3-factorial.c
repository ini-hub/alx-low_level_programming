#include "main.h"

/**
 * factorial - A functiom that returns the factorial of a given number
 * @n: Function parameter
 * Return: 0 Always
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
