#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Print various sizes
 */
int main(void)
{
printf("char is %zd byte(s)\n", sizeof(char));
printf("int is %zd byte(s)\n", sizeof(int));
printf("long int is %zd byte(s)\n", sizeof(long int));
printf("long long int is %zd byte(s)\n", sizeof(long long int));
printf("float is %zd byte(s)\n", sizeof(float));
return (0);
}
