#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{
int i;

for (i = 0; i < 0; i++)
{
putchar(i + '0');
if (i == 9)
	continue;
putchar (',');
putchar (' ');
}
putchar('\n');

return (0);

}
