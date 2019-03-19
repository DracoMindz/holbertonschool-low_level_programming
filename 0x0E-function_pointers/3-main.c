#include <stdlib.h>
#include "function_pointers.h"

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
	int A, B;

	char *C;

	int (D)(int, int);

	if (argc != 4)
/* there are four arguements: calc, num1, operator, num2,*/
	{
		printf("Error\n");
		exit(98);
	}
/* accounting for three of the four arguments: num1, operator, num2 */
	A = atoi(argv[1]);
	B = atoi(argv[3]);
	C = argv[2];
/* C is the operator */
/*call the functions and the operator*/
	D = get_op_func(C);
	if (C == NULL)
/* if there is no operator present*/
	{
		printf("Error\n");
		exit(99);
	}
/*print the result of the A & B with use of operator */
	printf("%d\n", f(A, B));
}
