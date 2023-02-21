#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * c: parameter function
 * Return: Always 1 (Success) , 0 (Otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
