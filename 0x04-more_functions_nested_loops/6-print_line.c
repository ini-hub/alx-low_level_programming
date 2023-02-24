#include "main.h"

/**
 * print_line - A function that draws a straight line
 * Return: Always 0
 * @n: Function parameter
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
