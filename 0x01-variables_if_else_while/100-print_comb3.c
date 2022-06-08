#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -this program prints the combination of two numbers
 *
 * Return: return 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; p <= '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
