#include "main.h"
/**
 * swap_int - swaps value of int
 * @a: first int to be swapped
 * @b: second int to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c = *a;
	*a = *b;
	*b = c;
}
