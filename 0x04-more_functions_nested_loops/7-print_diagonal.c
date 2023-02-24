#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line
 * Return: Always 0
 * @n: Function parameter
 */

void print_diagonal(int n)
{
	int i, lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (lines = 0; lines < i; lines++)
				_putchar(32);
		_putchar(92);
		 _putchar('\n');
		}
	}
}
