#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * Return: 0 Always.
 * @n: function parameter
 */
void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else 
				printf("%d, \n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, \n", i);
		}
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, \n", i);
		}
	}
	else if (n == 98)
		printf("%d\n", n);
}
