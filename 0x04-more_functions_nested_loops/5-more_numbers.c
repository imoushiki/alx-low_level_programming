#include "main.h"
/**
 * more_numbers-prits 0-14 10 times
 * Return: 0
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <=  14; i++)
{
_putchar(i + '0');
if (i < 14)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
