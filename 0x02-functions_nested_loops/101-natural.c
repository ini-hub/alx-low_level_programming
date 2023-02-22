#include <stdio.h>
/**
 * main - A program that computes and prints the sum of all the multiples (3|5)
 * Return: 0 Always
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
