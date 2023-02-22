#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * return: Values of the last number digit
 * @num: Function parameter
 */

int print_last_digit(int num)
{
	int i;

	i = num % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
