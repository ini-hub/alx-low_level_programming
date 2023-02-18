#include <stdio.h>
/**
 * main - A program that prints all possible different combo of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, count = 0;
	char digits[] = "0123456789";

	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (count > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('%c', digits[i]);
			putchar('%c', digits[j]);
			count++;
		}
	}
	putchar('\n');
	return 0;
}
