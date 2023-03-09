#include "main.h"

/**
 * _print_rev_recursion - A recursive function that prints a string in reverse
 * @s: Function parameter
 * Return: 0 Always
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar (*s);
}
