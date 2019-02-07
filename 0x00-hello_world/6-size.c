#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Print various sizes
 */
int main(void)
{
printf("Size of a char: %zd byte(s)\n", sizeof(char));
printf("Size of an int: is %zd byte(s)\n", sizeof(int));
printf("Size of a long int: is %zd byte(s)\n", sizeof(long int));
printf("Size of a long long int: is %zd byte(s)\n", sizeof(long long int));
printf("Size of a float: is %zd byte(s)\n", sizeof(float));
return (0);
}
