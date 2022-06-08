#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - a program that prints all single combinations of single digit numbers
 *
 * Return: return 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10, c++)
	{
		putchar(c + '0');
		if (c == 9)
		{
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
