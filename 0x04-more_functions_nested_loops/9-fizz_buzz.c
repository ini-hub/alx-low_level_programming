#include <stdio.h>
#include "main.h"

/**
 * main - An interview Fizz-Buzz Test question
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 15 != 0))
		{
			printf("Fizz");
		}
		else if ((num % 5 == 0) && (num % 15 != 0))
		{
			printf("Buzz");
		}
		else if (num % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
