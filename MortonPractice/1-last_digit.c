#include <stdlib.h>
#include <time.h>
/**
* main - last digit of random number
*
* Description: will list the last digit of a random number
*
* Return: void/
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of n is");

	if (n > 5)
	   {
	   printf("%d and in greater than 5\n",n % 10);
	   }
		else (n = 0)
		     {
		     printf("%d and is 0\n",n % 10);
		     }
		     else if (n < 6 && n != 0)
		     {
		     printf("%d and in less than 6 and not 0\n",n % 10);
		     }
		     putchar('\n');

	return (0);
}
