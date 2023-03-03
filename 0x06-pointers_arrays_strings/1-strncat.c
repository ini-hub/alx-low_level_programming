#include "main.h"

/**
 * *_strncat - Concatenates two strings using at most an inputtednumber of byte
 * @dest: The string to be appended upon.
 * @src; The string to be apppended to dest
 * @n: the number of bytes from src ro be appended to dest
 * Return: A pointer to the resultgin string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
