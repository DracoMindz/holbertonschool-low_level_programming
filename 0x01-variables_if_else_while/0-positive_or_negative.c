#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Find negaive or positive
 *
 * Return: 0
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n >= 1)
    {
	    printf("%d is positive\n", n);
    }
    else if (n = 0)
    {
	    printf("%d is zero\n", n);
    }
    else if (n < 1)
    {
	    printf("%d is negative\n", n);
    }
    return (0);
}
