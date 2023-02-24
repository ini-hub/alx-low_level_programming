#include "main.h"

/**
 * print_numbers - A function that prints the numbers, from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(num[x]);
	}
	_putchar('\n');
}
