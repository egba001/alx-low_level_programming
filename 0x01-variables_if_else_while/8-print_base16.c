#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints numbers and letters using putchar
 *
 * Return: return o
 */
int main(void)
{
	int n;
	int ch;

	for (n = 0; n <= 10; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
