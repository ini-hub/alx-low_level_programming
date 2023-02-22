#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 0
 * Return: 0 Always.
 */
void times_table(void)
{
	int lop;
	int num;
	int row;
	int outp;
	int out;
	for (lop = 0; lop <= 10; lop++)
	{

		for (row = 0; row < 10; row++)
		{
			num = lop * row;
			if (num > 9)
			{
				out = num % 10;
				outp = (num - out) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(outp + '0');
				_putchar(out + '0');
			}
			else
			{
				if (row != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(num + '0');
			}
		}
		_putchar('\n');
	}
}
