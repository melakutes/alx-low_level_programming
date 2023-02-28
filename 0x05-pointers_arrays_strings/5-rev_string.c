#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: Pointer to a string
 * Return: Always 0
 */
void rev_string(char *s)
{
int i = 0;
int a = 0;
int temp;

while (s[i] != '\0')
{
i++;
}
i--;
while (i > a)
{
temp = s[i];
s[i--] = s[a];
s[a++] = temp;
}
}
