#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print number using putchar
 *
 * Return: return 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
