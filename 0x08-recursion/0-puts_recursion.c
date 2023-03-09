#include "main.h"

/**
 * _puts_recursion - A recursive function that prints a string
 * @s: Function parameter
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	s++;
	_puts_recursion(s);
}
