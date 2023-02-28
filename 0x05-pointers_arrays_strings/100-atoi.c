#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int c = 0;
	unsigned int ni = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sign *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			result = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (result == 1)
		{
			break;
		}
		c++;
	}
	ni *= sign;
	return (ni);
}
