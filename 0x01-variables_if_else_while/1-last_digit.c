#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - last digit file
 *
 * Return: always success
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("last digit of %i is %i and is %d\n", n, m);
	}
	else
	{
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
