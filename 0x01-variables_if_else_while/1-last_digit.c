#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Calculate last number of random number */

/**
 * main -  Calculate last number of random number
 *
 * Return: 0
 */
int main(void)
{
	int m, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is ", n);
	if (m > 5)
	{
		printf("%d and is greater than 5\n", m);
	}
	else if (m == 0)
	{
		printf("%d and is 0\n", m);
	}
	else if (m < 6 && m != 0)
	{
		printf("%d and is less than 6 and not 0\n", m);
	}
	return (0);
}
