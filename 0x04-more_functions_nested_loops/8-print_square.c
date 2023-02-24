#include "main.h"
/**
 * print_square - A function that prints a square
 * Return: 0 Always
 * @size: Function parameter
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
