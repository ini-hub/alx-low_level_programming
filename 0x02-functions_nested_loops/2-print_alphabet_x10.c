#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet in LC
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int times;
	char i;

	for (times = 0 ; times < 10 ; times++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
