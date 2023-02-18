#include <stdio.h>
/**
 * main  - A program thats complex
 * Return: 0 as Success always
 */

int main(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n')
		return (0);
	}
