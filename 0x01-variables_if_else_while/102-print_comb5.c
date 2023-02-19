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
		j = i + 1;
		while (j <= 99)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	return (0);
}
