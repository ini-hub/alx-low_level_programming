#include "main.h"

/**
 * _puts - Afunction that prints a string, followed by a new line
 * @str: Function parameter
 * Return: Always 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
