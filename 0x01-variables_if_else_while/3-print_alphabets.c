#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - a program that prints lower case and upper case alphabets
 *
 * Return: return 0
 */
int main(void)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	printf('\n');
	return (0);
}
