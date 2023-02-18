#include <stdio.h>
/**
 * main - A program that prints all possible combo of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
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
				putchar(i + '0');
		
			}
			if (j < 10)
			{
				putchar('0');
				putchar(j + '0');
			}
			else
			{
				putchar(j);
			}
		}
	}
	return 0;
}
