#include <stdlib.h>
/**
 * _strlen - calculates length of string
 * @str: string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: determine how many bytes of string 2 are concatenated to s1
 *
 * Return: points to the newly allocated space in memory
 * If failure, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, num;
	char *new_str;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num >= _strlen(s2))
		num = _strlen(s2);
	new_str = malloc(sizeof(char) * (_strlen(s1) + num + 1));
	if (!new_str)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (j = 0; j < num; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
