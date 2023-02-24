#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(92);
		}
		 _putchar('\n');
	}
}
