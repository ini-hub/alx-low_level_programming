#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 0
 * Return: 0 Always.
 */
void times_table(void)
{
	int lop;
	int num = 0;
	int row;
	for (lop = 0; lop <10; lop++)
	{
		for (row = 1; row <10; row++)
		{
		num = +row;
			if(num < 10)
			{
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
