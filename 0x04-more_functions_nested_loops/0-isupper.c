#include "main.h"

/**
 * _isupper - Checks if the letter is upper
 * @x: function parameter
 * Return: 1 for upper letter or 0 for any other
 */

int _isupper(int x)
{
	if (x >=65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
