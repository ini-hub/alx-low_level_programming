#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */

int main(void)
{
	int num;
	char hex;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}

