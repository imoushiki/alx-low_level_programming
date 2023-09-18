#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string pointer to be checked
 * Return: return length of string
 */
int _strlen(char *s)
{
int c = 0;
while (*(s + c) != '\0')
{
c++;
}
return (c);
}
