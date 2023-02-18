#include <stdio.h>
/**
 * main - A program that prints all possible combo of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			if (i < 10)
			{
				putchar('0');
				putchar(i + '0');
			}
			else
			{
				putchar(i / 10 + '0');
				putchar(1 % 10 + '0');
			}
			putchar(' ');
			if (j < 10)
			{
				putchar('0');
				putchar(j + '0');
			}
			else
			{
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
