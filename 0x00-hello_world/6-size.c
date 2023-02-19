#include <stdio.h>
/**
 * main - A program that prints the size of various types of pc it's compiled
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %ld byte(s)\n", sizeof(a));
printf("Size of a int: %ld byte(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(c));
printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
printf(stderr, "[%c]");
return (0);
}
