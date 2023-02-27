#include "main.h"

/**
 * swap_int - A function that swaps the value of two integers
 * @a: Function parameter
 * @b: Function parameter
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
