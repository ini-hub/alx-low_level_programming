#include "main.h"

/**
 * print_triangle - A function that print triangle of squares
 * @size: The size of the square triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= (size - 1); x++)
		{
			for (y = 0; y < (size - 1) - x; y++)
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
