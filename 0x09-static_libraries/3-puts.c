#include "main.h"
#include <stdio.h>

/**
 * _puts - Afunction that prints a string, followed by a new line
 * @str: Function parameter
 * Return: Always 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
