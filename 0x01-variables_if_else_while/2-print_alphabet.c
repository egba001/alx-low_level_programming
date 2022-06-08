#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - a program that prints alphabets
 *
 * Return: return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
