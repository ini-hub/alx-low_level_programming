#include "main.h"
#include <stdio.h>

/**
 * jack_bauer _ A function that prints every minute of the day of Jack Bauer
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	int hrs;
	int min;

	for (hrs = 0 ; hrs < 24 ; hrs++)
	{
		min = 0;
		while (min < 60 )
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			min++;
			_putchar('\n');
		}
	}
}
