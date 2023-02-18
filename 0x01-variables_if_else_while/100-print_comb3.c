#include <stdio.h>
/**
 * main - A program that prints all possible different combo of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, count = 0;
	int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (count > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(digits[i] + '0');
			putchar(digits[j] + '0');
			count++;
		}
	}
	putchar('\n');
	return 0;
}
