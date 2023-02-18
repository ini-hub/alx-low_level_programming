#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char num[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
