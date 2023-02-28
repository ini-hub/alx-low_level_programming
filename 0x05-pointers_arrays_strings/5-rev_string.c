#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - A function that reverses a string
 * @s: Function Parameter
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
