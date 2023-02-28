#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be measured
 * Return: Always 0
 */
int _strlen(char *s)
{
int l = 0;

while (*s)
{
l += 1;
s += 1;
}
return (l);
}
