#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
		i += 1;
	}
	else
	{
		i = len / 2;
	}

	for (; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
