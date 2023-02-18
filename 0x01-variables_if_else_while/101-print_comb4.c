#include <stdio.h>
/**
 * main - A program that prints all possible different combo of three digits
 * Return: 0 (Success)
 */
int main()
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
			}
		}

        }
	return 0;
}
