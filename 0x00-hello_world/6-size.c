#include<stdio.h>
/*main -Entry
 *
 * Return 0
 */
int main(void
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of char: %zu byte\n", sizeof(char));
    return (0);
}
