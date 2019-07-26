#include "3-calc.h"

/**
 * main - function performs simple operations using other functions
 * @argc: count of arguments
 * @argv: pointer to an array of arguments
 *
 * Description: function function searches for an integer
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int pa1, pa2;

	int (*f)(int, int);

	if (argc != 4)
/* there are four arguements: calc, num1, operator, num2,*/
	{
		printf("Error\n");
		exit(98);
	}
/* accounting for three of the four arguments: num1, operator, num2 */
	pa1 = atoi(argv[1]);
	pa2 = atoi(argv[3]);
/* C is the operator */
/*call the functions and the operator*/
	f = get_op_func(argv[2]);
	if (f == NULL)
/* if there is no operator present*/
	{
		printf("Error\n");
		exit(99);
	}
/*print the result of the A & B with use of operator */
	printf("%d\n", f(pa1, pa2));
	return (0);
}
