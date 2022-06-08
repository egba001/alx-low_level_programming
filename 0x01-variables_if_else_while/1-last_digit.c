#include <stdlib.h>
#include <time.h>
/* more headers goes here */
#include <stdio.h>
/**
 * main - program that prints the status of the last digit number
 *
 * Return: return 0
 */
int main(void)
{
	int n, lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNumber = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNumber);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNumber);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNumber);
		printf("\n");
	}
	return (0);
}
