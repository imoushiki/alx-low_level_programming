#include<stdio.h>
/**
 * main -Entry
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %zu byte\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long int));	   	   printf("Size of a float: %zu bytes\n", sizeof(float));
        return (0);
}
