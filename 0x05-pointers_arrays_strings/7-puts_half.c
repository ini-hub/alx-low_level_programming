#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
