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
			putchar('0' + i + 1);
			putchar('0' + j);
			putchar(' ');
		}
	}
	return 0;
}
