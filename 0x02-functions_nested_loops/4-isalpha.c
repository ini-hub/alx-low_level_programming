#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: function parameter
 * Return: 1 (Success), 0 (Otherwise)
 */

int _isalpha(int c)
{
	if(c >= 65 && c<=122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
