#include "main.h"

/**
 * print_last_digit - Afunction that prints the last digit of a numbeer
 * return: i (Last number)
 */

int print_last_digit(int num)
{
	int i;
	i = num % 10;
	if (i < 0)
	{
		i = -i;
	}
	return (i);
}
