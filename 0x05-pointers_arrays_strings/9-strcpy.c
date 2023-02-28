#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 *
 * @dest: The buffer to copy the string to
 * @src: The string to copy
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy src to dest character by character */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Append null terminator to dest */
	dest[i] = '\0';

	return (dest);
}
